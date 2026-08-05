#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;

    cout << "Please enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "sum = " << sum << endl;
    
    return 0;
}