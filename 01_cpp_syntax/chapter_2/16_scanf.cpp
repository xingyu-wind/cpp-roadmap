/*scanf函数：
在使用前需要引入头文件 cstdio
函数原型：int printf (const char * format, ...);
    其第一个参数为格式字符串，里面放占位符，
    告诉编译器如何解读用户的输入
读取原理：
    输入内容先放到缓存，按下回车后，按占位符对缓存解读。
    且解读时，从上次解读遗留的第一个字符开始，直到读完缓存，
    或者遇到第一个不符合条件的字符为止。
占位符：
    %c(char), %d(整数), %lld(long long int), %s(字符串),
        %f(float), %lf(double), %Lf(long double)
    scanf与printf区别：double输入lf输出f
对于%c:
    %c不像其他占位符那样，会忽略前面的空白字符，
        它总会返回当前第一个字符。
    如果想跳过%c前面的空白字符，在%c前面加一个空格即可。
对于%d:
    可用语法(如：%4d)来设置输入宽度。
scanf的返回值：
    为一个整数，表示成功读取的变量个数。
    匹配失败则返回 0。
    在读取任何数据之前就发生错误，返回常量EOF(-1)
*/


// //基本用法：
// #include <cstdio>

// int main() {
//     int i = 0;
//     scanf ("%d", &i); // & 为取地址操作符(指针变量，数组不用加)
//     printf ("%d\n", i);
//     return 0;
// }


// //读取并输出多个数据
// #include <cstdio>

// int main() {
//     int a, b, c, d;
//     scanf ("%d %d %d %d", &a, &b, &c, &d); 
//     printf ("%d %d %d %d\n", a, b, c, d);
//     return 0;
// }


// //输入的数据要和sacnf中指定的数据类型严格匹配
// #include <cstdio>

// int main() {
//     int a, b;
//     float c, d;
//     scanf ("%d %d %f %f", &a, &b, &c, &d);
//     printf ("%d %d %.2f %.2f", a, b, c, d);
//     return 0;
// }


// //scanf函数读取分析：
// #include <cstdio>

// int main() {
// int x = 0;
// float y = 0;
// // ⽤⼾输⼊ " -13.45e12# 0"
// scanf("%d", &x); // 读到-13，存到x里面
// printf("%d\n", x);
// scanf("%f", &y); // 读到0.45 * 10 ^ 12
// printf("%f\n", y);
// return 0;
// }


// //对于占位符%c
// #include <cstdio>

// int main() {
//     char ch;
//     scanf ("%c", &ch);
//     printf ("---%c---", ch);
//     scanf (" %c", &ch);
//     printf ("---%c---", ch);
//     return 0;
// }


//scanf函数返回值：
#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    float f = 0.0f;
    int r = scanf ("%d %d %f", &a, &b, &f);
    printf ("a=%d b=%d f=%f\n", a, b, f);
    printf("r=%d", r);
    return 0;
}