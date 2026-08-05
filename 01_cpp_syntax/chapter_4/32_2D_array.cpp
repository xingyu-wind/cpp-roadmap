/*二维数组(把一维数组作为其元素)：
二维数组的创建：type arr_name[常量值1][常量值2];
    常量1表示行数，常量2表示列数。
二维数组的初始化：
    不完全初始化(从第一行开始一行一行往下赋值)
    完全初始化
    数组初始化时，可以省略行，但是不能省略列
二维数组的下标：
    其行和列均从0开始
二维数组元素的遍历和打印：
    用嵌套循环遍历下标即可。 
使用memset设置二维数组内容： 
*/


// // 二维数组的初始化：
// #include <iostream>
// using namespace std;

// int main() {

//     // 不完全初始化(从第一行开始一行一行往下赋值)：
//     int arr1[3][5] = {1, 2};

//     // 完全初始化：
//     int arr2[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};

//     // 按行初始化：
//     int arr3[3][5] = {{1,2},{3,4},{5,6}};

//     // 数组初始化时，可以省略行，但是不能省略列：
//     int arr4[][5] = {1, 2, 3, 4, 5, 6};
//     int arr5[][5] = {{1,2},{3,4},{5,6}};
//     return 0;
// }


// // 二维数组的下标：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//     cout << arr[2][4] << endl;
//     return 0;
// }


// // 二维数组元素的遍历和打印：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 5; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }


// // 输入并输出：
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][5] = {0};
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 5; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }


// // 使用memset设置二维数组内容：
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     int arr[10][10];
//     memset(arr, 0, sizeof(arr));
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 10; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[10][10];
    // 数组首元素地址 要设置的内容 设置多少个(以字节为单位)
    memset(arr, 'x', sizeof(arr));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
