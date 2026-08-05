/*memset函数 设置数组内容(多用于字符数组)：
其用来设置内存， 单位字节 ，需引入头文件<cstring>
函数原型：void * memset (void * ptr, int value, size_t num);
    memset(内存设置) mem -> memory(记忆)内存
    ptr 指针：指向了要设置的内存块的起始位置。
        数组名就是数组首元素的地址。
    value 要设置的值
    num 设置的字节个数
其用来设置整型数组时，一般只能设置为0，因为该函数设置以字节为单位，
    且计算机为二进制计数，设置为其他数字，可能得不到预期结果
*/


// // 设置字符数组内容：
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     char arr[] = "hello world";
//     cout << arr << endl; // 字符数组可以直接用cout打印。
//     // memset (arr, 'x', 5); // 将前5给字符设置为x
//     // 其他改法：
//     memset (arr + 2, 'x', 5);
//     cout << arr << endl;
//     return 0;
// }


// 设置整型数组内容：
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    memset (arr, 0, 20);
    for (int e : arr) {
        cout << e << " ";
    }
    return 0;
}
