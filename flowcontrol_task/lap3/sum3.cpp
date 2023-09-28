#include <iostream>
using namespace std;

int main() {
    int num, total=0;
    cout << "enter a number: ";
    cin >> num;
    for (int i = 1; i<=num; i= i+2) { 
        total += i;
        if (i != num) {
            cout << i << " + ";}
        }

    cout << num << " = " << total << endl;
    
    return 0;

}