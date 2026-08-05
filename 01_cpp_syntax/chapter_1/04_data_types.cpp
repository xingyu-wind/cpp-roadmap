/*数据类型：
简单数据类型（内置数据类型）：
    字符型（单个字符）char
        e.g. 'a' '@' '\n'
        每个字符都有对应的二进制编码：ASCII编码
        对应十进制(dec)、八进制(oct)、十六进制(hex)
        A-Z 65-90
        a-z 97-122
        0-9 48-57
        \n 10
        其中0-31是不可打印字符
        32-127是可打印字符
    整型（整数）short-int-long-long long 
    浮点型（小数/实数）
        float 单精度浮点型
        double 双精度浮点型
        long double
        小数书写形式：
            3.14 (double)
            3.14f (float)
            1e5 + 10 (1.0*10^5 + 10 = 100010)
    布尔类型bool
        true (非0)
        false (0)
*/

#include <iostream>
using namespace std;

int main() {
    char ch1 = 'q';
    cout << ch1 << endl;
    int num = '@';
    cout << num << endl;
    float f = 5.5f; // 5.5会被编译器识别为double
    cout << f << endl;
    return 0;
}