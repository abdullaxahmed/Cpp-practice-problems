#include <iostream>
using namespace std;

int main() {
    int x, y, sign;
    cout << "pick an arithmetic operator" << endl << "1.  +" << endl << "2.  -" << endl << "3. *" << endl << "4. /" << endl;
    cin >> sign;
    cout << "enter the 2 numbers yuo will use on the operator: ";
    cin >> x >> y;
    
    switch (sign) {
        case 1:
             cout << x + y << endl;
             break;
        case 2:
             cout << x - y << endl;
             break;
        case 3:
             cout << x * y << endl;
             break;
        case 4:
             cout << x / y << endl;
             break;
        default:
             cout << "error" << endl;
    }
    
}