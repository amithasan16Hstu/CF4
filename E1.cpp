#include <iostream>
#include <vector>

using namespace std;

// Function to check if the ball can destroy all walls
bool canDestroyAllWalls(const vector<int>& A, int N, int start, bool direction) {
    vector<int> temp = A;  // Copy the array to simulate ball movements
    int position = start;

    while (position >= 0 && position < N) {
        if (temp[position] == 0) {
            break;  // Ball cannot move further if it encounters empty ground
        }

        if (direction) {  // Moving right
            if (position + 1 < N) {
                temp[position + 1] += 1;  // Increase height on right
            }
            temp[position] -= 1;  // Decrease height of the wall
            if (temp[position] == 0) {
                temp[position] = 0;  // Set to empty ground
            }
            position++;  // Move ball to the right
        } else {  // Moving left
            if (position - 1 >= 0) {
                temp[position - 1] += 1;  // Increase height on left
            }
            temp[position] -= 1;  // Decrease height of the wall
            if (temp[position] == 0) {
                temp[position] = 0;  // Set to empty ground
            }
            position--;  // Move ball to the left
        }
        direction = !direction;  // Change direction after hitting the wall
    }

    // Check if all walls are destroyed
    for (int height : temp) {
        if (height > 0) {
            return false;  // If any wall is still present
        }
    }
    return true;  // All walls destroyed
}

// Function to count the number of ways to destroy all walls
int countWaysToDestroyAllWalls(const vector<int>& A, int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            if (canDestroyAllWalls(A, N, i, true)) {  // Start from i and move right
                count++;
            }
            if (canDestroyAllWalls(A, N, i, false)) {  // Start from i and move left
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        cout << countWaysToDestroyAllWalls(A, N) << endl;
    }

    return 0;
}
