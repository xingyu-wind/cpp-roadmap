/*printf函数(指定格式输出时常被用到)：
    在使用前需要引入头文件 cstdio
    函数原型：int printf ( const char * format, ...)
        f -> format(格式化)
    占位符：其可在输出文本中指定占位符
        %d(int), %s(字符串), %lld(long long int),
        %f(float + double), %Lf(long double),
        %c(char), %u(unsigned int)
    格式化输出：定制占位符的输出格式
        限定宽度：e.g. %5d(默认向右对齐)，
            如果想向左对齐，可在 % 后面加一个 -
        限定小数位数：e.g. %.2f
        这两个限定均可用 * 代替：
            printf ("%*.*f", 6, 2, 0.5);
*/


// #include <cstdio>

// int main() {
//     printf ("Hello world\n");

//     printf ("there are %d apples\n", 3);
//     printf ("%s will come tonight\n", "ZhangSan");  
//     printf ("%s says it is %d o'clock", "LiSi", 21);
//     //多个占位符，要一一对应
//     return 0;
// }


#include <cstdio>

int main() {
    // 整数宽度的限定
    printf ("%5d", 123); // 至少打印5位
    printf ("%-5d\n", 123); // 改至左对齐
    printf ("\n");

    // 小数宽度的限定
    printf ("%f\n", 123.45);
    // %f 默认打印到小数点后6位
    printf ("%12f\n", 123.45); // 算位数时包含小数点

    // 小数位数的限定
    printf ("%.2f\n", 1123.45);

    // 同时限制 宽度 + 位数
    printf ("%6.2f\n", 0.5);
    printf ("%*.*f\n", 6, 2, 0.5); // 其等价于上面
    return 0;
}