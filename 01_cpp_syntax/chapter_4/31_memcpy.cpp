/*memcpy函数(用来做内存块拷贝)：
在使用此函数前要先引入头文件<cstring>
函数原型：
    void * memcpy (void * destination, const void * source, size_t num);
        destination 目标空间的起始位置
        source 源数据空间的起始位置
        num 拷贝的数据的字节个数

*/


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {0};
    for (int e : b) {
        cout << e << " ";
    }
    cout << endl;
    memcpy (b, a, 10 * sizeof(int));
    for (int e : b) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
