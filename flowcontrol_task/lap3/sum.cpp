#include <iostream>

using namespace std;

int main() {
    int m, n, sum = 0;

    cout << "Enter the starting number: ";
    cin >> m;

    cout << "Enter the ending number: ";
    cin >> n;

    for (int i = m; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of all numbers from " << m << " to " << n << " is " << sum << endl;

    return 0;
}