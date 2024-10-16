#include <iostream>
using namespace std;

int main() {
    int G, S, B;
    cin >> G >> S >> B;

    int additional_gold = (G < 5) ? 5 - G : 0;
    int additional_silver = (S < 5) ? 5 - S : 0;
    int additional_bronze = (B < 5) ? 5 - B : 0;

    int total_additional_medals = additional_gold + additional_silver + additional_bronze;

    cout << total_additional_medals << endl;

    return 0;
}