#include <iostream>
using namespace std;

int main() {
    // Pattern A
    cout << "Pattern A\n\n";
    for (int i = 1; i <= 10; i++) { // Loop from 1 to 10
        for (int j = 1; j <= i; j++) { // Print '+' for each level
            cout << "+";
        }
        cout << endl; // Move to the next line
    }

    // Pattern B
    cout << "\nPattern B\n\n";
    for (int i = 10; i >= 1; i--) { // Loop from 10 down to 1
        for (int j = 1; j <= i; j++) { // Print '+' for each level
            cout << "+";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
