//1 https://ac.nowcoder.com/acm/contest/19304/D
// #include <iostream>
// using namespace std;

// int main() {
//     int m, n;
//     cin >> m >> n;   
//     if (m % n == 0) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2039/
// #include <iostream>
// using namespace std;

// int main() {
//     long long x, y;
//     cin >> x >> y;
//     if (x > y) {
//         cout << ">" << endl;
//     }
//     else if (x == y) {
//         cout << "=" << endl;
//     }
//     else {
//         cout << "<" << endl;
//     }
//     return 0;
// }


//3 https://www.luogu.com.cn/problem/B2036
// #include <cstdio>
// #include <cmath>

// int main() {
//     float n = 0;
//     scanf ("%f", &n);
//     printf ("%.2f", fabs(n));
//     return 0;
// }


//4 https://www.luogu.com.cn/problem/B2037
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    if (n > 0) {
        if (n % 2 == 1) {
            cout << "odd" << endl;
        }
        else {
            cout << "even" << endl;
        }
    }
    else if (n < 0) {
        if (n % 2 == -1) {
            cout << "odd" << endl;
        }
        else {
            cout << "even" << endl;
        }
    }
    return 0;
}