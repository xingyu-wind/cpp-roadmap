#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Please enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "positive" << endl;
    }
    else if (number == 0) {
        cout << "zero" << endl;
    }
    else {
        cout << "negative" << endl;
    }
    return 0;
}