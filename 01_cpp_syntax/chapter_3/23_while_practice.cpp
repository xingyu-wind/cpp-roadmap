// //1 https://ac.nowcoder.com/acm/contest/18839/1023
// // 反向输出一个四位数
// // 自己：
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int a = n % 10;
//     int b = (n % 100 - a) / 10;
//     int c = (n % 1000 - 10 * b - a) / 100;
//     int d = n / 1000;
//     cout << a << b << c << d << endl;
//     return 0;
// }


// //优化：
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     while (n) {
//         cout << n % 10; // 输出末位数字
//         n /= 10; // 去掉最低位
//     }
//     return 0;
// }


// //2 https://ac.nowcoder.com/acm/problem/22199
// // 各位数之和：
// //自己：
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     long long n = 0;
//     cin >> n;
//     int r = 0;
//     int x = 0;
//     while (n) {
//         r = abs(n % 10); 
//         x +=r;
//         n /= 10;
//     }
//     cout << x << endl;
//     return 0;
// }


// //优化：
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     long long n = 0;
//     cin >> n;
//     n = abs(n);
//     int r = 0;
//     while (n) {
//         r += n % 10;
//         n /= 10;
//     }
//     cout << r << endl;
//     return 0;
// }


// //3 https://www.nowcoder.com/practice/ce0b2eacd3d04647831358c2876e44ff
// // 自己：
// #include <iostream>
// using namespace std;

// int main() {
//     long long n = 0;
//     cin >> n;
//     long long r = 0;
//     r = (n * (n + 1)) / 2;
//     cout << r << endl;
//     return 0;
// }


// // 优化：
// #include <iostream>
// using namespace std;

// int main() {
//     long long n = 0;
//     cin >> n;
//     long long r = 1;
//     int x = 2;
//     if (n == 1) {
//         cout << 1 << endl;
//     }
//     else {
//         while (x <= n) {
//             r += x;
//             x++;
//         }
//         cout << r << endl;
//     }
//     return 0;
// }


// //再优化：
// #include <iostream>
// using namespace std;

// int main() {
//     long long n = 0;
//     cin >> n;
//     long long r = 0;
//     int x = 1;
    
//     while (x <= n) {
//         r += x;
//         x++;
//     }
//         cout << r << endl;
//     return 0;
// }


// //4 https://www.luogu.com.cn/problem/B2078
// // 自己：
// #include <iostream>
// using namespace std;

// int main() {
//     long long m, k;
//     cin >> m >> k;
//     int x = 0;
//     int n = 0;
//     while (m) {
//         x = m % 10;
//         if (x == 3) {
//             n++;
//         }
//         m /= 10;
//     }
//     if (n == k) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }


// // 优化：
// #include <iostream>
// using namespace std;

// int main() {
//     long long m, k;
//     cin >> m >> k;
//     int n = 0;
//     while (m) {
//         if (m % 10 == 3) {
//             n++;
//         }
//         m /= 10;
//     }
//     if (n == k) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }


// //5 https://www.luogu.com.cn/problem/B2077
// // 角谷猜想：注意数值范围操作后溢出。
// #include <iostream>
// using namespace std;

// int main() {
//     long long N = 0;
//     cin >> N;
//     while (N != 1) {
//         if (N % 2 == 1) {
//             cout << N << "*3+1=" << N * 3 + 1 << endl;
//             N = N * 3 + 1;
//         }
//         else {
//             cout << N << "/2=" << N / 2 << endl;
//             N = N / 2;
//         }
//     }
//     cout << "End" << endl;
//     return 0;
// }


// //6 计算多项式的值：
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// int main() {
//     float x = 0;
//     int n = 0;
//     cin >> x >> n;
//     double r = 0;
//     while (n != 0) {
//         r += pow (x, n);
//         n--;
//     }
//     cout << fixed << setprecision(2) << r + 1 << endl; 
//     return 0;
// }