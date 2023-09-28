
/*Write a program to take a 10 numbers from user and
print largest and smallest numbers*/

#include <iostream>
using namespace std;

int main() {
    int x[10];

    for (int i=0; i<10; i++){
        cout << "enter number " << i + 1 << ": ";
        cin >> x[i];
    }
      
    int smallest = x[0];
    int greatest = x[0]; 

    for (int i=1; i<10; i++){
         
            if (x[i]>greatest){
                greatest = x[i];
            }
            if (x[i]<smallest){
                smallest = x[i];
            }
    }

         cout << "smallest number is " << smallest << endl;
         cout << "greatest number is " << greatest << endl;

    return 0;
}