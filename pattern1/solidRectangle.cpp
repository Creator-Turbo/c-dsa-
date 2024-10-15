#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "No of rows : ";
    cin >> n;
  
    int m;
    cout << "No of columns : ";
    cin >> m;

    // Loop to print the rectangle of stars
    for (int i = 1; i <= n; i++) {      // Loop for rows
        for (int j = 1; j <= m; j++) {  // Loop for columns (use 'j' instead of 'i')
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}



