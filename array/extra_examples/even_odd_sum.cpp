/*Write a program that takes 2D array of integers of size (N x N)
from the user and print the summation of even numbers in
each row and the summation of odd numbers in each row.*/

#include <iostream>
using namespace std;

int main(){
    
    int row,col;
    cout << "enter sixe of array (N x N): ";
    cin >> row >> col;
    int x[row][col];

    for (int i = 0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> x[i][j];
        }
    }
    
      for (int i = 0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << x[i][j]<< "  ";
        }
        cout << endl;
    }

      for (int i = 0; i<row; i++){
          int even=0, odd=0;
        for (int j=0; j<col; j++){
            if((x[i][j])%2==0){
                x[i][j] == even;
                even += x[i][j];
            }    
            else {  x[i][j] == odd;
                odd += x[i][j];
                }
        }
    cout << "sum of even in row " << i+1 << " = " << even << endl;
    
    cout << "sum of odd numbers in row " << i+1 << " = " << odd << endl;
    }
    
    
    
    return 0;
}