//补充知识点：
/*数学函数：
使用前先引入 cmath
    sqrt(x) 平方根
    cbrt(x) 立方根
    pow(a, b) 幂运算
        开n次方 -> pow(x, 1.0 / n);
    abs(x) 取整数绝对值
    fabs(x) 取浮点数绝对值
    floor(x) 向下取整，返回浮点型
    ceil(x) 向上取整，返回浮点型
    round(x) 四舍五入，返回浮点型
    trunc(x) 截掉小数，返回浮点型
    fmod(a, b) 浮点余数(取模)
    hypot(a, b) 三角形两直角边求斜边
*/


//1 https://www.luogu.com.cn/problem/P5705
// //自己：
// #include <iostream>
// using namespace std;

// int main() {
//     float f = 0;
//     cin >> f;
//     int r = f * 10;
//     int a = r % 10;
//     int b = r % 100 - a;
//     int c = r % 1000 - (b * 10 + a);
//     int d = r / 1000;
//     cout << 0.001 * (a * 1000 + b * 100 + c * 10 + d) << endl;
//     return 0;
// }


// //优化：
// #include <iostream>
// using namespace std;

// int main() {
//     char a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;
//     cout << e << d << c << b << a;
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/P5708
//自己：
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// int main() {
//     double a, b, c;
//     cin >> a >> b >> c;
//     double p = 0.5 * (a + b + c);
//     double s = sqrt(p * (p - a) * (p - b) * (p - c));
//     cout << fixed << setprecision(1) << s << endl;
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
// // 自己
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     if (n > 0) {
//         if (n % 2 == 1) {
//             cout << "odd" << endl;
//         }
//         else {
//             cout << "even" << endl;
//         }
//     }
//     else if (n < 0) {
//         if (n % 2 == -1) {
//             cout << "odd" << endl;
//         }
//         else {
//             cout << "even" << endl;
//         }
//     }
//     return 0;
// }