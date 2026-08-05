//1 https://www.nowcoder.com/practice/0948f4f3344c452f843afd3585dd0f8d?tpId=290&tqId=320953&ru=/exam/oj&qru=/ta/beginner-programmers/question-ranking&sourceUrl=%2Fexam%2Foj
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;
//     int n = 0;
//     for (int i = 1; i <= 2019; i++) {
//         n = i;
//         while (n != 0) {
//             if (n % 10 == 9) {
//                 sum += 1;
//                 break;
//             }
//             n /= 10;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2064
// // 斐波那契数列
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int a = 0;
//     while (n--) {
//         cin >> a;
//         int x = 1;
//         int y = 1;
//         int z = 1;

//         while (a > 2) {
//             z = x + y;
//             x = y;
//             y = z;
//             a--;
//         }
//         // 斐波那契数列解题思维

//         cout << z << endl;
//     }
//     return 0;
// }


//3 https://www.luogu.com.cn/problem/B2079
// // 阶乘相关问题：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     long long jiecheng = 1;
//     double sum = 0;
//     for (int i = 1; i <= n; i++) {
//         jiecheng *= i;
//         sum += 1.0 / jiecheng;
//     }
//     cout << fixed << setprecision(10) << 1 + sum << endl;
//     return 0;
// }


//4 https://ybt.ssoier.cn/ide1.php?pid=2027
// // 画三角形
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i;j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//5 https://www.luogu.com.cn/problem/B2083
// // 画矩形(空心)
// // 自己：
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     char c;
//     cin >> c;
//     int f;
//     cin >> f;
//     if (f == 0) {
//         for (int i = 1; i <= a; i++) {
//             if (i == 1 || i == a) {
//                 for (int j = 1; j <= b; j++) {
//                     cout << c;
//                 }
//             }
//             else {
//                 for (int j = 1; j <= b; j++) {
//                     if (j == 1 || j == b) {
//                         cout << c;
//                     }
//                     else {
//                         cout << " ";
//                     }
//                 }
//             }
//             cout << endl;
//         }
//     }
//     else {
//         for (int i = 1; i <= a; i++) {   
//             for (int j = 1; j <= b;j++) {
//                 cout << c;
//             }
//             cout << endl;
//         }  
//     }
//     return 0;
// }


// // 优化：
// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     int a, b, f;
//     cin >> a >> b >> c >> f;
//     for (int i = 1; i <= a; i++) {
//         for (int j = 1; j <= b; j++) {
//             if (i == 1 || i == a || j == 1 || j == b) {
//                 cout << c;
//             }
//             else if (f == 0) {
//                 cout << " ";
//             }
//             else {
//                 cout << c;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


//6 https://www.luogu.com.cn/problem/B2085


//7 https://ybt.ssoier.cn/ide1.php?pid=2029
// 水仙花数：
// // 自己：
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int z = 0;
//     int n = 0;
//     int sum = 0;
//     for (int i = 100; i <= 999; i++) {
//         z = i;
//         while (z != 0) {
//             n = z % 10;
//             z /= 10;
//             sum += pow (n, 3);
//         }
//         if (sum == i) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }


// 优化：
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int z = 0;
    int n = 0;
    for (int i = 100; i <= 999; i++) {
        int sum = 0;
        z = i;
        while (z != 0) {
            n = z % 10;
            z /= 10;
            sum += pow (n, 3);
        }
        if (sum == i) {
            cout << i << endl;
        }
    }
    return 0;
}