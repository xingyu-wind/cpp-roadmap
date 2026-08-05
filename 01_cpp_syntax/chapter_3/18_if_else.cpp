/*总览：
    1 if - else语句
    2 关系操作符
    3 条件操作符
    4 逻辑操作符
    5 switch语句
    6 while循环语句
    7 for循环语句
    8 do - while循环语句
    9 break和continue语句
    10 循环嵌套
    */


/*if - else语句(分支语句)：
    if语句：
        基本形式：if (表达式)
                     语句;
        0表示假(语句不执行),非0表示真(语句执行)
    else语句：
        基本形式：if (表达式)
                    语句1;
                 else
                    语句2;
    if / else后面默认只能控制一条语句，如果需要写多条语句，
        需要使用{}
    嵌套if(else if语句):
        在 if-else 语句中，else可以与另一个if语句连用，
        构成多重判断，有两种格式，如下：
        if()
            语句1;
        else {
            if() 
                语句2;
            else
                语句3;
        }

        if()
            语句1;
        else if()
            语句2;
        else
            语句3;
    悬空else:
        如果有多个if和else，else总是跟最接近的if匹配
    建议写 if-else 时都尽量带括号去写，提高代码的可读性
*/


// //输入一个正整数n，如果n是奇数就打印奇数，是偶数就打印偶数
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     if (n % 2 == 1)
//         cout << "奇数" << endl;
//     else
//         cout << "偶数" << endl;
//     return 0;
// }


// // 输入一个数表示年龄，年龄>=18就输出：成年，否则输出：未成年
// #include <iostream>
// using namespace std;

// int main() {
//     int age = 0;
//     cin >> age;
//     if (age >= 18)
//         cout << "成年" << endl;
//     else 
//         cout << "未成年" << endl;
//     return 0;
// }


// // 接上一道题，如果想要打印更多的话，则需要加大括号：
// #include <iostream>
// using namespace std;

// int main() {
//     int age = 0;
//     cin >> age;
//     if (age >= 18) {
//         cout << "成年" << endl;
//         cout << "可以谈恋爱了" << endl;
//     }
//     else {
//         cout << "未成年" << endl;
//         cout << "不能谈恋爱" << endl;
//     }
//     return 0;
// }


// // 嵌套if(else if语句)：
// // https://www.luogu.com.cn/problem/B2035
// #include <iostream>
// using namespace std;

// int main() {
//     long long N = 0;
//     cin >> N;
//     if (N > 0) 
//         cout << "positive" << endl;
//     else if (N < 0)
//         cout << "negative" << endl;
//     else
//         cout << "zero" << endl;
//     return 0;
// }


// 悬空else:
// 判断程序输出：
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    if (a == 1)
        if (b == 2)
            cout << "hehe" << endl;
    else
        cout << "haha" << endl;
// 下面这个 if-else 语句是嵌套在第一个if之中的，
// 当第一个if语句不成立，嵌套在里面的 if-else 语句就没有机会执行了
    return 0;
}