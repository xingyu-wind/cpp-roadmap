/*
cin(c:scanf)(标准输入流对象)/cout(c:printf)(标准输出流对象)
自动识别变量类型
二者为全局流对象

>> 流提取运算符
<< 流插入运算符
*/

#include <iostream>
using namespace std;

int main() {
    int num; //num其实是一块空间，可以存放一个整数
    cin >> num; //输入一个整数存放在num中
    cout << num << endl;
    return 0;
}

/*
endl 换行和刷新缓存区
*/

/*命名空间：
使用命名空间对标识符（变量、函数、类等的名称）的名称进行隔离，
以避免命名冲突、名字污染
std C++标准库的命名空间名
*/