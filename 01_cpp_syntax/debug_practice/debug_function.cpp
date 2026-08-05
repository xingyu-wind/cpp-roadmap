#include <iostream>
using namespace std;

int getMax(int a, int b) {
    int result;

    if (a > b) {
        result = a;
    }
    else {
        result = b;
    }

    return result;
}

int main() {
    int x = 8;
    int y = 5;

    int answer = getMax(x, y);

    cout << "max = " << answer << endl;

    return 0;
}