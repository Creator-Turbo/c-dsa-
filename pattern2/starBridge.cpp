#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "No of lines: ";
    cin >> n;

    // Top line: Print 2n-1 stars
    for (int i = 1; i <= 2 * n - 1; i++) {
        cout << "*";
    }
    cout << endl;

    int nsp = 1;  // Initial spaces in the second line

    // Loop for subsequent lines
    for (int i = 1; i <= n - 1; i++) {
        // Print decreasing stars on the left
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Print increasing spaces in the middle
        for (int k = 1; k <= nsp; k++) {
            cout << " ";
        }
        nsp += 2;

        // Print decreasing stars on the right
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
