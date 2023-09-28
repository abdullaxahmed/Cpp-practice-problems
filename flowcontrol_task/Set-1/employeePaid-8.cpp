#include <iostream> 
using namespace std;

int main()
{
  int s, HRA, DA, Gross;
  cout << "enter salary: ";
  cin >> s;

  if (s<1500) {
    
  HRA = 0.1 * s;
  DA = s * 0.9;
  Gross = HRA + DA;
  cout << "HRA = " << HRA << endl;
  cout << "DA = " << DA << endl;
  cout << "Gross Salary is " << Gross << endl;
   }

     else if (s>=1500) {
    
     HRA = 500;
     DA = s * 0.98;
     Gross = HRA + DA;
     cout << "HRA = " << HRA << endl;
     cout << "DA = " << DA << endl;  
     cout << "Gross Salary is " << Gross << endl;
     }

  return 0;
} 
