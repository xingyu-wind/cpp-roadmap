/*switch语句(分支语句)：
其用于判断有多个结果的情况，等效多重else if
基本形式：
    switch (expression表达式) {
        case value1: statement
        case value2: statement
        default: satement
    } // value为表达式的值
        expression必须时整型/字符型表达式，
            case后的值必须是整型常量表达式
    switch语句中的break:
        case决定入口，break决定出口，顺序执行
    switch语句中的default:
        当switch后面的表达式的值无法匹配case语句时，
            就会执行default语句
    case和default的顺序问题：
        二者没有具体要求，但习惯将异常数据处理放在最后面
*/


// // 计算一个整型除以3的余数：
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 0;
//     cin >> x;
//     switch (x % 3) {
//         case 0:
//             cout << "余数是0" << endl;
//             break;
//         case 1:
//             cout << "余数是1" << endl;
//             break;
//         case 2:
//             cout << "余数是2" << endl;
//             break;
//     }
//     return 0;
// }


// 输入一个数：1~5输出"Workday"，6~7输出"Weekend"
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;
    switch (x) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Workday" << endl;
            break;
        case 6:
        case 7:
            cout << "Weekend" << endl;
            break;
        default:
            cout << "Input error" << endl;
    }
    return 0;
}