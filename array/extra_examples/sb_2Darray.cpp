/*Write a program to take an array 2D from user and
print largest and smallest number in each row.*/

#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout << "enter number of rows:";
    cin >> row;
    cout << "enter number of columns:";
    cin >> col;
    int x[row][col];
    cout << "enter the numbers for the maxtrix (2 digit max): ";
    

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> x[i][j];
        }
    }

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << x[i][j] << "  ";
        }
        cout << endl;
    }

    
    for (int i=0; i<row; i++){
        int max = x[i][0],min = x[i][0];
        for (int j=0; j<col; j++){
           if(max < x[i][j]){
            max = x[i][j];
           }
           if(min > x[i][j]){
            min =x[i][j];
           }
        }
    cout << "max row " << i+1 << ": " << max << endl;
    cout << "min row " << i+1 << ": " << min << endl;
    }
    return 0;
}