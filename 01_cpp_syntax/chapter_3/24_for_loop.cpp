/*for循环：
基本语法形式：
    for (exp1; exp2; exp3) {
        语句1;
        语句2;
        ...
    }
    exp1 用于循环变量的初始化(其只被执行一次)
    exp2 用于循环结束条件的判断
    exp3 用于循环变量的调整
*/


// 用for循环在屏幕上打印1~10的值：
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    for (i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    return 0;
}