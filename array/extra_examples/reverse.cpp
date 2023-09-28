/*Write a program to take array of char of size N
from user, reverse it and print it.*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    char x[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter char " << i + 1 << ": ";
        cin >> x[i];
    }

    cout << "Reversed array: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << x[i];
    }
    cout << endl;

    return 0;
}
