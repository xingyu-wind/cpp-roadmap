/*常量(不能被改变的值)：
字面常量：
    整型常量：十、八(0开头)、十六(0x开头)进制
    字符常量
    浮点型常量
#define定义常量：
    #define 常量名 内容
    (编译在处理这种常量时，就是直接将名字替换成对应内容)
const定义常量：
    const 数据类型 常量名字 = 常量值;
一般常量名用全大写表示
*/


// #include <iostream>
// using namespace std;

// #define M 10

// int main() {
//     cout << M << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

const double PI = 3.1415926;

int main() {
    cout << "请输入圆的半径：" << endl;
    int r = 0;
    cin >> r;
    cout << "圆的周长为：" << 2 * PI * r << endl;
    cout << "圆的面积为：" << PI * r * r << endl;
    return 0;
}