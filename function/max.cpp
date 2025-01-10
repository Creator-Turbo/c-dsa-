#include <iostream>
using namespace std;

int maxthree(int a, int b, int c) {
    return max(a, max(b, c));
}

int main() {
    int a = 200, b = 9, c = 79;
    cout << maxthree(a, b, c);
}
