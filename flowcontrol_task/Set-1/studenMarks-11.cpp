#include <iostream>
using namespace std;
int main() {
int sub1, sub2, sub3, sub4, sub5;
float avg;
cout << "enter the grade of subject 1: ";
cin >> sub1;
cout << "enter the grade of subject 2: ";
cin >> sub2;
cout << "enter the grade of subject 3: ";
cin >> sub3;
cout << "enter the grade of subject 4: ";
cin >> sub4;
cout << "enter the grade of subject 5: ";
cin >> sub5;
avg = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
if (avg >= 60) {
cout << "you average is " << avg << endl << "first division" << endl;}
else if (avg <= 59 && avg >= 50) {
cout << "you average is " << avg << endl << "second division" << endl;}
else if (avg <= 49 && avg >= 40) {
cout << "you average is " << avg << endl << "third division" << endl;}else if (avg < 40) {
cout << "you average is " << avg << endl << "fail" << endl;}
return 0;
}