// //1 https://ac.nowcoder.com/acm/contest/19304/O
// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     switch (x % 100) {
//         case 3:
//         case 4:
//         case 5:
//             cout << "spring" << endl;
//             break;
//         case 6:
//         case 7:
//         case 8:
//             cout << "summer" << endl;
//             break;
//         case 9:
//         case 10:
//         case 11:
//             cout << "autumn" << endl;
//             break;
//         case 12:
//         case 1:
//         case 2:
//             cout << "winter" << endl;
//             break;
//     }
//     return 0;
// }


// // 用另一种写法：
// #include <cstdio>
// #include <iostream>
// using namespace std;

// int main() {
//     int year, month;
//     scanf ("%4d%2d", &year, &month);
//     switch (month) {
//     case 3:
//     case 4:
//     case 5:
//         cout << "spring" << endl;
//         break;
//     case 6:
//     case 7:
//     case 8:
//         cout << "summer" << endl;
//         break;
//     case 9:
//     case 10:
//     case 11:
//         cout << "autumn" << endl;
//         break;
//     case 12:
//     case 1:
//     case 2:
//         cout << "winter" << endl;
//         break;
//     }
//     return 0;
// }


// //2 https://www.luogu.com.cn/problem/B2052
// // 最基础计算器：注意字符要加 ''
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     char ch;
//     cin >> ch;
//     switch (ch) {
//         case '+':
//             cout << a + b << endl;
//             break;
//         case '-':
//             cout << a - b << endl;
//             break;
//         case '*':
//             cout << a * b << endl;
//             break;
//         case '/':
//             if (b == 0) {
//                 cout << "Divided by zero!" << endl;
//             }
//             else {
//                 cout << a / b << endl;
//             }
//         break;
//         default:
//             cout << "Invalid operator!" << endl;
//     }
//     return 0;
// }