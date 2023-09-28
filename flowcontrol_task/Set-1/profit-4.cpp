#include <iostream>
using namespace std;
int main() {
int cost, sell;
cout << "enter cost: ";
cin >> cost;
cout << "enter selling price: ";
cin >> sell;
if (cost <= sell) {
cout << "The seller made profit." << "The profit is " << sell - cost << endl;}
else
{ cout << " The seller incurred loss. " << "The loss is " << cost - sell << endl;}
return 0;
}