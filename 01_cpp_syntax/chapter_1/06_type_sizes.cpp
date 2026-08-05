/*sizeof操作符
用来计算特定类型的长度，单位：字节
单位换算：
    1字节 = 8bit
*/

#include <iostream>
using namespace std;

int main() {
    int a = 100;
    cout << sizeof (a) << endl;
    cout << "char " << sizeof (char) << endl;
    cout << "short " << sizeof (short) << endl;
    cout << "int " << sizeof (int) << endl;
    cout << "long " << sizeof (long) << endl;
    cout << "long long " << sizeof (long long) << endl;
    cout << "float " << sizeof (float) << endl;
    cout << "double " << sizeof (double) << endl;
    cout << "long double " << sizeof (long double) << endl;
    cout << "bool " << sizeof (bool) << endl;
    return 0;
}

// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     cout << CHAR_MIN << endl;
//     cout << CHAR_MAX << endl; 
//     cout << LLONG_MIN << endl;
//     cout << LLONG_MAX << endl;
//     return 0;
// }

/*不同数据类型(整型)的取值范围(量级)
char(1) 2^7
unsigned char 2^8
short(2) 2^15
unsigned short 2^16
int(4) 2^31
unsigned int 2^32
long(4) 2^31
unsigned long 2^32
long long(8) 2^63
unsigned long long 2^64
*/