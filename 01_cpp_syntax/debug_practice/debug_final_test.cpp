#include <iostream>
using namespace std;

int countMultiplesOfThree(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    cout << "Please enter n: ";
    cin >> n;

    int answer = countMultiplesOfThree(n);

    cout << "answer = " << answer << endl;

    return 0;
}