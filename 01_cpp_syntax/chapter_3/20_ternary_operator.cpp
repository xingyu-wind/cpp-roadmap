/*条件操作符(三目操作符)：
形式：exp1 ? exp2 : exp3;   exp(表达式)
计算逻辑：
    exp1为真，则返回exp2的值；
    exp2为假，则返回exp3的值。
*/


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    // a > 5 ? b = 3 : b = -3;
    b = (a > 5 ? 3 : -3);
    cout << b << endl;
    return 0;
}