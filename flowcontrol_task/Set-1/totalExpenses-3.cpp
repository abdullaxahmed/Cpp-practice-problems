#include <iostream>
using namespace std;

int main() {
    int select, item1, item2, item3, q1, q2, q3;
    int total;


cout << "select item: " << endl << "1. item 1 (500$) "<< endl <<
"2. item 2 (1000$)" << endl << "3. item 3 (300$)"<< endl << "4. done" << endl;


while (select != 4) {

cin >> select;

switch (select) {
   case 1:
   
   cout << "quantity of item: ";
   cin >> q1;
   item1 = 500 * q1;
   break;
   case 2:
   
   cout << "quantity of item: ";
   cin >> q2;
   item2 = 1000 * q2;
   break;
   case 3:
   
   cout << "quantity of item: ";cin >> q3;
   item3 = 300 * q3;
   break;
          }
          total = item1 + item2 + item3;
}
total = item1 + item2 + item3;

if (total > 5000) {
cout << "you get a discount of 10%" << endl << "your total was $" <<
total << endl;
total = 0.9 * total;
cout << "Now, your total is $" << total << endl;}

return 0;
}