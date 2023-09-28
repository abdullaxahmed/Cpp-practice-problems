#include <iostream> 
using namespace std;

int main() { 

    for (int i=1; i<6; i++) {
        for (int j=1; j<=i; j++){
            for (int k=6; k>=1; k--){cout << " ";}
        cout << '*';}
        cout << endl;}

        return 0;
}