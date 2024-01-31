#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;

    int k = -1; // Initialize the result index to -1

    for (int i = 0; i <= a.length() - b.length(); i++) {
        bool match = true; // Assume a match at index i

        for (int j = 0; j < b.length(); j++) {
            if (a[i + j] != b[j]) {
                match = false; // Set match to false if characters don't match
                break;
            }
        }

        if (match) {
            k = i; // Update the result index if a match is found
            break; // Break out of the loop since we found the first match
        }
    }

    cout << k; // Output the result index
    return 0;
}