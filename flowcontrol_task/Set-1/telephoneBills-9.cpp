#include <iostream>
using namespace std;
int main() {
int calls;
cout << "enter number of calls: ";
cin >> calls;
if (calls <= 100) {
cout << "total bill is Rs. " << calls * 0.2 << endl;}
else if (150 >= calls && calls > 100) {
cout << "total bill is Rs." << 100 * 0.2 + (calls - 100) * 0.6 << endl;}
else if (200 >= calls && calls > 150) {
cout << "total bill is Rs. " << 100 * 0.2 + 50 * 0.6 + (calls - 150) * 0.5 << endl;}
else {
cout << "total bill is Rs. " << (100 * 0.2) + (50 * 0.6) + (50 * 0.5) + ((calls - 200) * 0.4) <<
endl;}
return 0;
}