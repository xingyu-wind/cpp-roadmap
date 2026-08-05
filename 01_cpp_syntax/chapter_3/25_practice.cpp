//1 统计正整数的位数
/*输入一个正整数，计算这个整数是几位数？
    例：输入：1234 输出：4
        输入：12   输出：2*/
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 0;
//     int t = 0;
//     cin >> n;
//     do {
//         n /= 10;
//         t ++;
//     }
//     while (n != 0);
//     cout << t << endl;
//     return 0;
// }


//2 https://www.luogu.com.cn/problem/B2076
// 一定要认真读题，注意题目中的每一个字眼。
#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    double h = n;
    double sum = 0;
    for (int i = 0; i < 9; i++) {
    n /= 2;
    sum += (n * 2);
    }
    cout << (sum + h)<< endl;
    cout << n / 2 << endl; 
    return 0;
}