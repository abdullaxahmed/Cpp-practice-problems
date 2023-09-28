/*
Any year is input by the user. Write a program to determine
whether the year is a leap year or not. 
*/

#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if(year % 4 == 0 && year % 100!= 0 || year % 400 == 0){
        cout << "It is a leap year." << std::endl;
    }
    else{
        cout << "It is not a leap year." << std::endl;
    }

    return 0;
}