/*cin和cout：
cin(标准输入流对象)，与 >> (流提取运算符)配合使用
    一般针对键盘
cout(标准输出流对象)，与 << (流插入运算符)配合使用
    一般针对控制台窗口
二者是以 字符流 的形式输入和输出的
连续输入输出：
    cin >> a >> b >> c;
    cout << a << b << c;
    实际上是将变量插入到cout对象里面，并以cout对象作为返回值返回，
    因此还可以用 << 在后面连续输出多个内容
    (相当于每次输出都刷新出一个cout用来继续输出)
*/

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    float f = 0;
    // 输入：100 3.14 200 abcdef
    cin >> n >> f;
    // cin 用来提取从键盘上输入的字符流，转化为对应数据类型
    cout<< n << endl << f << endl;
    // 再将数据转化为字符(流)，输出到控制台上
    return 0;
}