// //1 求和：计算1~100之间3的倍数的数字之和：
// // 自己：
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 1;
//     int r = 0;
//     for (num = 3; num <= 100; num +=3) {
//         r += num;
//     }
//     cout << r << endl;
//     return 0;
// }


// //2 https://www.luogu.com.cn/problem/B2054
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     float num = 0;
//     for (int i = 1; i <= n; i++) {
//         int x = 0;
//         cin >> x;
//         num += x;
//     }
//     cout << fixed << setprecision(2) << num / n << endl;
//     return 0;
// }


// //3 https://www.luogu.com.cn/problem/B2058
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int rj = 0;
//     int ry = 0;
//     int rt = 0;
//     int rz = 0;
//     for (int i = 1; i <=n; i++) {
//         int j, y, t;
//         cin >> j >> y >> t;
//         rj += j;
//         ry += y;
//         rt += t;
//         rz = rj + ry + rt;
//     }
//     cout << rj << " " << ry << " " << rt << " " << rz << endl;
//     return 0;
// }


// //4 https://www.luogu.com.cn/problem/B2065
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int a, b;
//     cin >> a >> b;
//     float x = 1.0 * b / a;
//     float y = 0;
//     for (int i = 1; i < n; i++) {
//         int c, d;
//         cin >> c >> d;
//         y = 1.0 * d / c;
//         if (y - x > 0.05) {
//             cout << "better" << endl;
//         }
//         else if (x - y > 0.05) {
//             cout << "worse" << endl;
//         }
//         else {
//             cout << "same" << endl;
//         }
//     }
//     return 0;
// }


// //5 https://www.luogu.com.cn/problem/B2066
// // 自己：
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     double z = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         double a, b;
//         int c;

//         cin >> a >> b >> c;

//         double t = 2 * sqrt(a * a + b * b) / 50 + c * 1.5;
//         z += t;
//     }

//     cout << ceil(z) << endl;

//     return 0;
// }


// // 优化：
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n = 0;
//     double m = 0;
//     double sum = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         double a, b;
//         int c;
//         cin >> a >> b >> c;
//         m = (2 * sqrt(a * a + b * b)) / 50 + (1 + 0.5) * c;
//         sum += m;
//     }
//     cout << (int)ceil(sum) << endl;
//     // 向上，下取整的函数返回值都是浮点型，因此要转化为整型
//     return 0;
// }



//6 https://www.luogu.com.cn/problem/B2070
// // 自己：
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// int main() {
//     double n = 0;
//     cin >> n;
//     double sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += (pow(-1, i - 1)) * 1.0 / i;
//     }
//     cout << fixed << setprecision(4) << sum << endl;
//     return 0;
// }


// https://www.luogu.com.cn/problem/B2069
// // 自己：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int q = 2;
//     int p = 1;
//     float sum = 2.0 / 1;
//     if (n == 1) {
//         cout << fixed << setprecision(4) << 2.0 / 1 << endl; 
//     }
//     else {
//         for (int i = 2; i <= n; i++){
//         int qi, pi;
//         qi = q + p;
//         pi = q;
//         int z = q;
//         q = q + p;
//         p = z;
//         sum += 1.0 * qi / pi;
//         }
//         cout << fixed << setprecision(4) << sum << endl;
//     }
//     return 0;
// }


// 优化：
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    float q = 2;
    float p = 1;
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += q / p;
        q = p + q;
        p = q - p;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}