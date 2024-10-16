#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    std::vector<int> results;
    results.reserve(t);

    while (t--) {
        int l, r;
        std::cin >> l >> r;
        
        // Number of integers from l to r
        int count = r - l + 1;

        // Minimum number of operations needed
        int operations_needed = count - 1;

        results.push_back(operations_needed);
    }

    for (const int &result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
