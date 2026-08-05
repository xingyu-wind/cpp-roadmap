//1 https://www.luogu.com.cn/problem/P5732
// // 杨辉三角：
// #include <iostream>
// using namespace std;

// const int N = 30;
// int a[N][N] = {0};

// int main() {
//     int n = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || j == i) {
//                 a[i][j] = 1;
//             }
//             else {
//                 a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2099
// // 矩阵交换行：
// #include <iostream>
// using namespace std;

// const int N = 5;
// int a[N][N] = {0};
// int b[N][N] = {0};

// int main() {
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> a[i][j];
//         }
//     }
//     int m, n;
//     cin >> m >> n;
//     for (int i = 0; i < 5; i++) {
//         if (i == m - 1) {
//             for (int j = 0; j < 5; j++) {
//                 b[0][0] = a[i][j];
//                 a[i][j] = a[n - 1][j];
//                 a[n - 1][j] = b[0][0];
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//3 https://www.luogu.com.cn/problem/B2099
// 图像相似度
#include <iostream>
#include <iomanip>
using namespace std;

const int N = 110;
int a[N][N] = {0};
int b[N][N] = {0};

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == b[i][j]) {
                sum += 1;
            }   
        }
    }
    cout << fixed << setprecision(2) << (1.0 * sum / (m * n)) * 100 << endl;
    return 0;
}


//4 https://www.luogu.com.cn/problem/B2104
// 矩阵加法


//5 https://www.luogu.com.cn/problem/B2106
// 矩阵转置


//6 https://www.luogu.com.cn/problem/B2101
// 计算矩阵边缘元素之和


//7 https://www.luogu.com.cn/problem/B2108
// 图像模糊处理


//8 https://www.luogu.com.cn/problem/P2550
// 彩票摇奖