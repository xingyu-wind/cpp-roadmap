/*关系操作符：
关系表达式里面使用的是关系运算符，如下：
    >, <, >=, <=, ==, != (其返回值为0或1)
关系操作符的连用：
    多个关系操作符不宜连用。
浮点数比较相等：
    有些浮点数在内存中无法精确保存，因此在比较二者相等时，
    用绝对值(减法) + 允许误差
*/


// 多个操作符不宜连用：
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 3;
//     int j = 7;
//     int k = 5;
//     if (i < j < k) {
//         cout << "对" << endl;
//     }
//     // i < j返回1，1 < k，所以返回对，而不是不对
//     else {
//         cout << "不对" << endl;
//     }
//     return 0;
// }


// 浮点数比较相等：
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0.1;
    double b = 0.2;
    double c = 0.3;
    if (fabs((a + b) - c) < 1e-6) {
        cout << "a + b == c" << endl;
    }
    else {
        cout << "a + b != c" << endl;
    }
    return 0;
}
