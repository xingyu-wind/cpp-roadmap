// //1 https://www.luogu.com.cn/problem/B2044
// // 利用好返回值
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if ((a < 60) + (b < 60) + (c < 60) == 1) {
//         cout << "1" << endl;
//     }
//     else {
//         cout << "0" << endl;
//     }
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2032
#include <iostream>
using namespace std;

int main() {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    cout << a1 + (n - 1) * (a2 - a1) << endl;
    return 0;
}