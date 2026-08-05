/*账⼾余额:
⼩明账⼾有100元，经过了下⾯的操作：
• 往⾥⾯存了10元
• 购物花掉了20元
• 把⾥⾯的钱全部取出
请在每次操作后输出账⼾余额：*/

// #include <iostream>
// using namespace std;

// int main() {
//     int first = 100;
//     first += 10;
//     cout << first << endl;
//     first -= 20;
//     cout << first << endl;
//     first = 0;
//     cout << first << endl;
//     return 0;
// }


//交换值：http://ybt.ssoier.cn:8088/problem_show.php?pid=2064
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int c;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b << endl;
    return 0;
}