// //1 https://www.luogu.com.cn/problem/B2049
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a >= b) {
//         int r = a > c ? a : c;
//         cout << r << endl;
//     }
//     else {
//         int r = b > c ? b : c;
//         cout << r << endl;
//     }
//     return 0;
// }


// //2 https://ac.nowcoder.com/acm/contest/19304/E
// #include <iostream>
// using namespace std;

// int main() {
//     long long X, Y, Z;
//     cin >> X >> Y;
//     Z = Y % X == 0 ? X + Y : Y - X;
//     cout << Z << endl;
//     return 0;
// }


// //3 https://www.luogu.com.cn/problem/P5709
// //吃苹果问题：

// /*需要考虑的问题：
//     1.除数(吃每个苹果的时间)不能为0，如果为0，则一个不剩
//     2.如果不能整除，会剩下没吃完的苹果，不能算完整的苹果，算他吃完
// */
// #include <iostream>
// using namespace std;

// int main() {
//     int m, t, s;
//     cin >> m >> t >> s;
//     if (t == 0) {
//         cout << 0 << endl;
//     }
//     else if (s % t == 0) {
//         cout << ((m - s / t) > 0 ? (m - s / t) : 0) << endl;
//     }
//     else {
//         cout << ((m - s / t - 1) > 0 ? (m - s / t - 1) : 0) << endl;
//     }
//     return 0;
// }