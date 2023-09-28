/*Write a program to print this 2D array of char of size N * N
if N = 7, so the 2D array is :
* * * * * * *
*           *
*           *
*           *
*           *
*           *
* * * * * * *
*/

#include <iostream> 
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    char x[N][N];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                x[i][j] = '*';
            } else {
                x[i][j] = ' ';
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << x[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
