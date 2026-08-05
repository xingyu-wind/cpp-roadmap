/*break和continue语句：
break用于永久终止循环
continue用于跳过本次循环(跳过其后面的语句)
*/


// 打印1~10 ，5除外
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}