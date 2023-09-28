
/* Write a program to take array of size N from user then
if number even change its value to 0 otherwise to 1
then print the array */
#include <iostream>
using namespace std;

int main(){

    int N;
    cout << "enter the size of the array: ";
    cin >> N;

    int x[N];

    for (int i=0; i<N; i++){
        cout << "enter number " << i+1 << ": ";
        cin >> x[i];
            
            if (x[i]%2 == 0){
                x[i] = 0;}

            else {x[i] = 1;}
    }

    for (int i=0; i<N; i++){
        cout << x[i];
        }

        cout << endl;

    return 0;
}