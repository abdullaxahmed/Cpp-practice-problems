#include <iostream>
using namespace std;

int main() {
    float num;
    float total=0;
    cout << "enter a number: ";
    cin >> num;
    for (float i = 1; i<=num; i++) { 
        total += 1/i;
        if (i != num) {
            cout << 1/i << " + ";}
        }

    cout << 1/num << " = " << total << endl;
    
    return 0;
}