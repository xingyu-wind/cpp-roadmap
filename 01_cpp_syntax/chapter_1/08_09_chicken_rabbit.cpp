/*鸡兔同笼
一个笼子里有若干只鸡和兔。已知鸡和兔一共有35个头，94只脚。
鸡有1个头、2只脚；兔有1个头、4只脚。
请编写一个C++程序，计算笼子里兔子的数量和鸡的数量。
要求输出兔子的数量和鸡的数量，中间用一个空格隔开。
本题没有输入数据，头的总数和脚的总数已经固定给出。
*/

/*做算法题的思维：
先看取值范围确定变量类型，
然后在纸上将脑子的思路记录下来，
接着将纸上的思路转化为代码实现。
*/

/*算法题网站各字母含义：
AC: Accepted 答案正确，整道题通过
WA: Wrong Answer 程序能运行，但输出答案不正确
CE: Compile Error 编译错误
RE: Runtime Error 编译成功，但运行时崩溃
TLE: Time Limit Exceeded 运行超时
MLE: Memory Limit Exceeded 内存超限
OLE: Output Limit Exceeded 输出内容太多
*/


#include <iostream>
using namespace std;

const int h = 35;
const int f = 94;

int main() {
    int j = (h * 4 - f) / 2;
    int t = h - j;
    cout << t << " " << j << endl;
    return 0;
}