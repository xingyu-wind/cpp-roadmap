/*术操作符(算术运算符)：
+,-,*,/,%(取模) -> 双目操作符(有两个操作数)
    / 得到的是整除后的数 e.g. 7 / 2 == 3
        若想算浮点数，保证两端至少有一个小数即可
    % 得到的是整除后的余数，且其只能针对整型运算
        负数取模：结果正负由第一个操作数(运算数)的符号决定
数值溢出：
    其溢出后，会从负数最小值重新往上加
*/


// #include <iostream>
// using namespace std;

// int main() {
//     int a = 7 / 2;
//     float b = 7.0 / 2;
//     int c = -7 % 2;
//     cout << a << " " << b << " " << c << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char a = 'Z'; // 90 (char: -128 ~ 127)
    char b = a + 'Z'; // 180
    cout << b << endl;
    cout << (int)b << endl;

    char ch1 = 127;
    ch1 = ch1 + 1;
    cout << endl << (int)ch1 << endl;
    return 0;
}