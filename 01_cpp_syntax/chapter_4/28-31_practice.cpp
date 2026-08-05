//1 https://www.luogu.com.cn/problem/B2093
// 查找特定的值
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int arr[10000] = {0};
//     // int arr[] = {0}; 数组全部越界
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int x = 0;
//     cin >> x;
//     int answer = -1;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             answer = i;
//             break;
//         }
//     }
//     cout << answer << endl;
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2089
// 数组逆序重存放
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int arr[110] = {0};
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


//3 https://www.luogu.com.cn/problem/B2091
// // 向量点积计算
// // 自己：
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int a[1010] = {0};
//     int b[1010] = {0};
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];    
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];    
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i] * b[i];    
//     }
//     cout << sum << endl;
//     return 0;
// }


//4 https://www.luogu.com.cn/problem/B2090
// // 自己：
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int N = 0;
//     cin >> N;
//     int a[110] = {0};
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
    
//     double age1 = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (a[i] > 0 && a[i] <= 18)
//         {
//             age1 += 1;
//         }
//     }
//     cout << fixed << setprecision(2) << age1 / N * 100 << "%" << endl;
    
//     double age2 = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (a[i] >= 19 && a[i] <= 35)
//         {
//             age2 += 1;
//         }
//     }
//     cout << fixed << setprecision(2) << age2 / N * 100 << "%" << endl;
    
//     double age3 = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (a[i] >= 36 && a[i] <= 60)
//         {
//             age3 += 1;
//         }
//     }
//     cout << fixed << setprecision(2) << age3 / N * 100 << "%" << endl;
    
//     double age4 = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (a[i] >= 61)
//         {
//             age4 += 1;
//         }
//     }
//     cout << fixed << setprecision(2) << age4 / N * 100 << "%" << endl;
//     return 0;
// }


// // 优化：合并循环和if分支:
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int N = 0;
//     cin >> N;
//     int a[110] = {0};
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
    
//     double age1 = 0;
//     double age2 = 0;
//     double age3 = 0;
//     double age4 = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (a[i] > 0 && a[i] <= 18)
//         {
//             age1 += 1;
//         }
//         else if (a[i] >= 19 && a[i] <= 35)
//         {
//             age2 += 1;
//         }
//         else if (a[i] >= 36 && a[i] <= 60)
//         {
//             age3 += 1;
//         }
//         else
//         {
//             age4 += 1;
//         }
//     }
//     cout << fixed << setprecision(2) << age1 / N * 100 << "%" << endl;
//     cout << fixed << setprecision(2) << age2 / N * 100 << "%" << endl;
//     cout << fixed << setprecision(2) << age3 / N * 100 << "%" << endl;
//     cout << fixed << setprecision(2) << age4 / N * 100 << "%" << endl;
//     return 0;
// }  


//5 https://www.luogu.com.cn/problem/B2092
// // 开关灯
// #include <iostream>
// #include <string>
// using namespace std;

// const int N = 5010;
// int arr[N] = {0};

// int main() {
//     int n = 0;
//     cin >> n;
    
//     // 因为编号1的人已经将所有灯都关闭了，
//     // 所以从第二个人开始遍历，分别确定每个人对灯的操作
//     for (int i = 2; i <= n; i++)
//     {   
//         // 第i个人从第j盏灯开始操作
//         for (int j = i; j <= n; j++)
//         {   
//             // j是i的倍数
//             if (j % i == 0)
//             {
//                 if (arr[j] == 0)
//                 {
//                     arr[j] = 1;
//                 }
//                 else
//                 {
//                     arr[j] = 0;
//                 }
//             }
//         }
//     }

//     // 所有灯的状态已经确定，接下来将关着的灯的编号输出即可
//     for (int i = 1; i <= n; i++) {
//         if (arr[i] == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


//6 https://www.luogu.com.cn/problem/P1428
// 小鱼比可爱
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     int a[110] = {0};
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     // 从头到尾遍历小鱼
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         // 先固定一个小鱼，将其与在其前面的鱼分别比较
//         for (int j = 0; j < i; j++) {
//             // 比其小，就有一个不如它可爱，计数+1
//             if (a[j] < a[i]) {
//                 sum += 1;
//             }
//         }
//     cout << sum << " ";
//     }
//     cout << endl;
//     return 0;
// }


//7 http://ybt.ssoier.cn:8088/problem_show.php?pid=2039
// // 降序(逆序)冒泡排序
// #include <iostream>
// #include <cstring>
// using namespace std;

// // 定义存储数据的数组
// const int N = 30;
// int arr[N] = {0};

// int main() {
//     int n = 0;
//     cin >> n;
//     // 数组初始化赋值
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];    
//     }
//     // 将数组元素遍历，依次比较，逆序(从大到小)就交换
//     // 需要比较的轮数
//     for (int i = 0; i < n - 1; i++) {
//         // 每两个相邻比较的次数(前面排完的不需要再排)
//         for (int j = 0; j < n - 1 - i; j++) {
//             // 如果是顺序，就交换位置
//             if (arr[j] < arr[j + 1]) {
//                 int num = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = num;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// // 升序(逆序)冒泡排序
#include <iostream>
using namespace std;

const int N = 30;
int arr[N] = {0};

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int num = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = num;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}