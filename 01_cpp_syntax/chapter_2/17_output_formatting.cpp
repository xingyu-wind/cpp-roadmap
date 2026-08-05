/*cout的格式输出：
要先引入头文件 iomanip (IO manipulators)
控制宽度和填充：
    setw 设置宽度，仅对接着的输出项有效
    setfill 设置填充字符
控制数值格式：
    fixed 不以科学计数法展示浮点数(固定小数点表示浮点数)
    scientific 以科学计数法表示浮点数
    setprecision 设置小数点后位数，一般先fixed再设置精度
控制整数格式：
    dex 十进制显示整数(默认)
    hex 十六进制显示整数
    oct 八进制显示整数
控制对齐方式：
    left 左对齐
    right 右对齐(默认)
*/


// 控制宽度和填充：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int a = 123;
//     cout << a << endl;
//     cout << setw(10) << a << endl;
//     cout << setw(10) << setfill('*') << a <<endl;
//     return 0;
// }


// 控制数值格式：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double pi = 3.141592653589793;
//     cout << pi << endl;
//     cout << fixed << pi << endl;
//     cout << scientific << pi << endl;
//     cout << fixed << setprecision(15) << pi << endl;
//     return 0;
// }


// 控制整数格式：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n = 255;
//     cout << "十进制" << dec << n << endl;
//     cout << "十六进制" << hex << n << endl;
//     cout << "八进制" << oct << n << endl;
//     return 0;
// }


// 控制对齐方式：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n = 123;
//     cout << setw(10) << setfill('*') << right << n << endl;
//     cout << setw(10) << setfill('*') << left << n << endl;
//     return 0;
// }