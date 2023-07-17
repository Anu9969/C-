#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate_permutations(vector<char>& digits) {
    sort(digits.begin(), digits.end());
    
    do {
        for (const char digit : digits) {
            cout << digit;
        }
        cout << endl;
    } while (next_permutation(digits.begin(), digits.end()));
}

int main() {
    string digit_str;
    cout << "Enter a set of digits (without spaces): ";
    cin >> digit_str;

    vector<char> digits(digit_str.begin(), digit_str.end());

    cout << "Permutations:" << endl;
    generate_permutations(digits);

    return 0;
}
