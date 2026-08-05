/*单目操作符：
++, --, +(正), -(负)
前置自增：先+1，后使用
后置自增：先使用，后+1
前置自减：先-1，后使用
后置自减：先使用，后-1
*/


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = a++;
    cout << a << " " << b << endl;
    return 0;
}