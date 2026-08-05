// //1 https://www.luogu.com.cn/problem/P5711
// // 闰年判断：四年一闰，百年不闰，四百年再闰
// #include <iostream>
// using namespace std;

// int main() {
//     int y = 0;
//     cin >> y;
//     if (((y % 4 ==0) && (y % 100 != 0)) || (y % 400 == 0)) {
//         cout << 1 << endl;
//     }
//     else {
//         cout << 0 << endl;
//     }
//     return 0;
// }


// //2 https://www.luogu.com.cn/problem/B2045
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     if (n == 1 || n == 3 || n == 5) {
//         cout << "NO" << endl;
//     }
//     else {
//         cout << "YES" << endl;
//     }
//     return 0;
// }


// //3 https://www.luogu.com.cn/problem/B2050
// //判断三角形成立：一般直接用任意两边之和大于第三边
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a + b > c && a + c > b && b + c > a){
//         cout << 1 << endl;
//     }
//     else {
//         cout << 0 << endl;
//     }
//     return 0;
// }


// //4 https://www.luogu.com.cn/problem/B2043
// //自己：
// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0) {
//         cout << "3 5 7" << endl;
//     }
//     else if (x % 3 == 0 && x % 5 == 0) {
//         cout << "3 5" << endl;
//     }
//     else if (x % 3 == 0 && x % 7 == 0) {
//         cout << "3 7" << endl;
//     }
//     else if (x % 5 == 0 && x % 7 == 0) {
//         cout << "5 7" << endl;
//     }
//     else if (x % 3 == 0) {
//         cout << 3 << endl;
//     }
//     else if (x % 5 == 0) {
//         cout << 5 << endl;
//     }
//     else if (x % 7 == 0) {
//         cout << 7 << endl;
//     }
//     else {
//         cout << "n" << endl;
//     }
//     return 0;
// }


// //优化：
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     if (n % 3 == 0) {
//         cout << 3 << " ";
//     }
//     if (n % 5 == 0) {
//         cout << 5 << " ";
//     }
//     if (n % 7 == 0) {
//         cout << 7 << " ";
//     }
//     if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0) {
//         cout << "n" << endl;
//     }
//     return 0;
// }


//5 https://www.luogu.com.cn/problem/P5710
// 自己：
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;

    if (x % 2 == 0 && (x > 4 && x <= 12)) {
        cout << 1 << " ";
    }
    else {
        cout << 0 << " ";
    } // 小A

    if (x % 2 == 0 || (x > 4 && x <= 12)) {
        cout << 1 << " ";
    }
    else {
        cout << 0 << " ";
    } // Uim

    // if ((x % 2 == 0 && (x <= 4 || x > 12)) || (x % 2 != 0 && (x > 4 && x <= 12) )) {
    //     cout << 1 << " ";
    // }
    // else {
    //     cout << 0 << " ";
    // } // 小B

    //优化小B如下：
    if ((x % 2 == 0) + (x > 4 && x <= 12) == 1) {
        cout << 1 << " ";
    }
    else {
        cout << 0 << " ";
    }

    // if (x % 2 != 0 && (x <= 4 || x > 12)) {
    //     cout << 1 << " ";
    // } 
    // else {
    //     cout << 0 << endl;
    // } // 正妹

    //优化正妹如下：
    if ((x % 2 == 0) + (x > 4 && x <= 12) == 0) {
        cout << 1 << " ";
    } 
    else {
        cout << 0 << " ";
    }

    return 0;
}