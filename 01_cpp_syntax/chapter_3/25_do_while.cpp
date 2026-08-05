/* do while循环：
基本语法形式：do {
                语句1;
                语句2;
                ...
            }
            while (表达式);
特点：循环体至少执行一次。
*/


// 用do while语句打印1~10的值
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    do {
        cout << a << " ";
        a++;
    }
    while (a <= 10);
    return 0;
}