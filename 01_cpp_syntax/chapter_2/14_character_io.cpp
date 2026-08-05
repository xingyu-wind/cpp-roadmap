/*getchar和putchar:
两个函数在使用前均需引入头文件 cstdio
getchar:
    函数原型： int getchar (void);  此函数返回的值为整型(ASCII值)
    特点：其不忽略起始的空白字符（回车键也算）。如果读取失败，
        会返回常量EOF(通常为-1)，想让其读取失败 ctrl + z
putchar:
    函数原型: int putchar (int character);
    其操作不成功时也返回EOF
*/


// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     int ch = getchar();
//     cout << "int " << ch << endl; // 数字
//     cout << "char " << (char)ch << endl; // 字符
//     ch = getchar();
//     cout << "int " << ch << endl; // 数字
//     cout << "char " << (char)ch << endl; // 字符
//     ch = getchar();
//     cout << "int " << ch << endl; // 数字
//     cout << "char " << (char)ch << endl; // 字符
//     return 0;
// }


// //读取失败：
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     int ch = getchar();
//     cout << ch << endl;
//     return 0;
// }


//putchar用法：
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int ch = getchar();
    putchar (ch);

    putchar ('x');
    putchar ('\n');
    putchar ('z');
    return 0;
}