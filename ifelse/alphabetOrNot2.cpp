#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
