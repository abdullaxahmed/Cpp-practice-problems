#include <iostream>
using namespace std;

int main()
{
 char a;
 cout << "enter any character:";
 cin >> a;

 if (65<=a && a<=90)  
    cout << "Capital Letter";

    else if (97<=a && a<=122)
    cout << "Small Letter";

    else if (48<=a && a<=57)
    cout << "Number";

    else cout << "special character";

 
 return 0;

}
