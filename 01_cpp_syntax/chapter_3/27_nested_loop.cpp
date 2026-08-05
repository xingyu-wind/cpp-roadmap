/*嵌套循环(打印乘法口诀表)：
外层循环控制打印几行，内层循环控制打印几列
*/


// https://ac.nowcoder.com/acm/problem/22206
// 打印九九乘法表：
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, j * i);
            // %2d用来控制空格占位对齐
        }
        cout << endl;
    }
    return 0;
}