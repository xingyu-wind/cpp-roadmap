/*while循环：
基本语法形式：
    while (表达式) {
        语句 1;
        语句 2;
        ...            
    }
    表达式为真，执行语句，再返回表达式判断，直到为假，停止循环
*/


//使用while循环在屏幕上打印1~10的值
#include <iostream>
using namespace std;

int main() {
    int n = 1;
    while (n <= 10) {
        cout << n << " ";
        n++;
    }
    return 0;
}