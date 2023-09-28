#include <iostream>
using namespace std;

int main (){
   int i;
   cout << "enter how many numbers you want to add: ";
   cin >> i;
   int x[i];
   
   for (int j = 0; j<i; j++){
    cout << "enter number " << j+1 << ":"<< endl;
    cin >> x[j];
   }

   int sum = 0;
   for (int j = 0; j<i; j++){
         sum += x[j];
   }
   cout <<"the sum is: " << sum << endl;

   return 0;
   }
