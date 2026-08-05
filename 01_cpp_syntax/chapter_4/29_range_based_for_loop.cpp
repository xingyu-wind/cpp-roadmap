/*范围for(基于范围的for循环):
基本语法：for (类型 变量名 : 数组名) {
            语句1;
            语句2;
            ...
        }
    该循环会把数组里面的元素依次放到变量里面
auto 关键字：让编译器自动推导出变量类型
*/


// // 用范围for打印数组：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for (int e : arr) {
//         cout << e << " ";
//     }
//     return 0;
// }


// auto 关键字的使用：
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto x : arr) {
        cout << x << " ";
    }
    return 0;
}
