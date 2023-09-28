/* Write a program to take array of size N from user and
number X then check if X is exist in array or not. */

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "enter the value of N: ";
    cin >> N;
    int X[N];

    for (int i=0; i<N; i++){
       cout << "enter the value of N" << i << ": " << endl;
       cin >> X[i];
    }
    
    int num;
    cout << "enter the value of X: ";
    cin >> num;

    for (int i=0; i<N; i++){

         if (num == X[i]){
             cout << "X exists" << endl;}

         else if(i==N-1){cout << "X does not exist" << endl;}
                         }

    return 0;

}