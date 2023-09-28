#include <iostream>
using namespace std;

int main() {

    int y;

    cout << "enter a year: ";
    cin >> y;

    if(y % 4 == 0)
    {cout << "this year is a leap year";}
    
    else
     {cout << "this year is not a leap year" << endl;} 

    return 0;
}