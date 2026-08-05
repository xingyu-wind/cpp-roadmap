/*数组：数组是一组相同类型元素的集合
    其里面可以存放1个或多个数据，但不能是0。
    其分为一维数组，多为数组(二维数组)和字符数组
一维数组：一维数组是一块连续的空间
数组创建：
    基本语法：type arr_name[常量值];
        type 为数据类型
        arr_name 为数组名
        常量值：数组元素的个数
            也可以用const int N = 100; 定义常量
            然后：int arr[N];
数组的初始化：
    完全初始化
    不完全初始化：剩余的元素会被默认初始化为0。
    错误的初始化：初始化项太多。
    初始化时可省略常量值，数组的大小会根据初始化的内容来确定
数组元素访问：
    数组是有下标的，从0开始
    下标引用操作符[]
数组元素的打印：
    用for循环来产生所有元素的下标，即可打印数组所有元素，
        但是所产生下标不能超出下标范围(越界访问)
数组和sizeof()：
    sizeof(arr_name) 计算数组总大小(单位字节)
    sizeof(数组名) / sizeof(第一个元素) 算的是数组元素个数
给数组输入值：
    用for循环产生所有下标，然后对应输入。
*/


// // 创建数组：
// #include <iostream>
// using namespace std;

// const int N = 20;

// int main() {
//     // int math[20];
//     int math[N];
//     char ch[8];
//     double score[10];
//     return 0;
// }



// // 数组的初始化
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5}; // 完全初始化
//     int arr2[6] = {1};
//     // 不完全初始化，初始化一部分，剩余元素会被默认初始化为0
//     int arr3[] = {1, 2, 3, 4, 5, 6, 7};
//     // 初始化时可省略常量值。
//     return 0;
// }


// // 数组元素访问：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     cout << arr[3] << endl;
//     // 下标引用操作符
//     return 0;
// }


// // 数组元素的打印：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for (int i = 0; i <= 9; i ++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// // 计算数组元素个数：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < sz; i ++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// 给数组输入值：
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}