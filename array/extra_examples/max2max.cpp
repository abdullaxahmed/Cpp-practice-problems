/*Write a program to take array of integer of size N
from user, and print the Maximum number and
the 2nd Maximum number in the array.*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    int x[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter num " << i + 1 << ": ";
        cin >> x[i];
    }

    int max = x[0];
    int max2 = x[0];

    for (int i = 1; i < N; i++) {
        if (x[i] > max) {
            max2 = max; 
            max = x[i]; 
        } else if (x[i] > max2 && x[i] != max) {
            max2 = x[i]; 
        }
    }

    cout << "Maximum number: " << max << endl;
    cout << "Second Maximum number: " << max2 << endl;

    return 0;
}
