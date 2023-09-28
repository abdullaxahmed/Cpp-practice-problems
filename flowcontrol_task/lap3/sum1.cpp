#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter number (up to 3 digits): ";
    cin >> num;
    int digit1 = num/100;
    int digit2 = ((num%100)/10);
    int digit3 = (num%10);
    cout << digit1 << "+" << digit2 << "+" << digit3 << "=" << endl;
    cout << digit1+digit2+digit3 << endl;
    
    return 0;
}