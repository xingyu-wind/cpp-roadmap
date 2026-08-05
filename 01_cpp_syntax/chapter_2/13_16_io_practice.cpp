//1 https://ac.nowcoder.com/acm/problem/21992
// //自己：
// #include <cstdio>

// int main() {
//     float a, b;
//     scanf ("%f %f", &a, &b);
//     float f = a / b;
//     printf ("%.3f", f);
//     return 0;
// }


// //优化：
// #include <cstdio>

// int main() {
//     int a, b;
//     scanf ("%d %d", &a, &b);
//     printf ("%.3f", (float)a / b);
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2012
// //自己
// #include <cstdio>

// int main() {
//     long long a = 0;
//     long long b = 0;
//     scanf ("%lld %lld", &a, &b);
//     printf ("%.3f%%", b * 100.0 / a);
//     return 0;
// }


//3 https://www.luogu.com.cn/problem/B2013
// //自己（注意观察数据类型，数据类型用错了）
// #include <cstdio>

// int main() {
//     int F = 0;
//     scanf ("%d", &F);
//     printf ("%.5f", (1.0 * 5 * ( F - 32 )) / 9);
//     return 0;
// }


// //优化：
// #include <cstdio>

// int main() {
//     double F = 0;
//     scanf ("%lf", &F);
//     printf ("%.5f", 1.0 * 5 * ( F - 32 ) / 9);
//     return 0;
// }


//4 https://www.luogu.com.cn/problem/B2015
// //自己：
// #include <cstdio>

// int main() {
//     double r1 = 0;
//     double r2 = 0;
//     scanf ("%lf %lf", &r1, &r2);
//     double R = 1.0 / ((1 / r1) + (1 / r2));
//     printf ("%.2f", R);
//     return 0;
// }


//5 https://www.luogu.com.cn/problem/B2014
// //自己：
// #include <cstdio>

// const double PI = 3.14159;

// int main() {
//     double r;
//     scanf ("%lf", &r);
//     double d = 2.0 * r;
//     double c = 2.0 * PI * r;
//     double s = PI * r * r;
//     printf ("%.4f %.4f %.4f", d, c, s);
//     return 0;
// }


//6 https://www.luogu.com.cn/problem/B2004
// //自己：
// #include <cstdio>

// int main() {
//     long long a, b, c;
//     scanf ("%lld %lld %lld", &a,&b,&c);
//     printf ("%8lld %8lld %8lld",a,b,c);
//     return 0;
// }


//7 https://ybt.ssoier.cn/problem_show.php?pid=2069
// //自己：并非同时进行，是按照顺序依次进行的
// #include <cstdio>

// int main() {
//     int a, b, c, d, e;
//     scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
//     int ra = a / 3 + e / 3 + b / 3;
//     int rb = b / 3 + a / 3 + c / 3;
//     int rc = c / 3 + b / 3 + d / 3;
//     int rd = d / 3 + c / 3 + e / 3;
//     int re = e / 3 + d / 3 + a / 3;
//     printf ("%5d%5d%5d%5d%5d", ra, rb, rc, rd, re);
//     return 0;
// }


//优化：
#include <cstdio>

int main() {
    int a, b, c, d, e;
    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int x = a / 3;
    a = x;
    b = (b + a) / 3; a += b;
    c = (c + b) / 3; b += c;
    d = (d + c) / 3; c += d;
    e = (e + x + d) / 3; a += e; d += e;
    printf ("%5d%5d%5d%5d%5d", a, b, c, d, e);
    return 0;
}