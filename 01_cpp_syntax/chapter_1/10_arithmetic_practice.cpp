//https://www.luogu.com.cn/problem/B2008
// //自己：
// #include <iostream>
// using namespace std;

// int main() {
//     int a,b,c;
//     cin >> a >> b >> c;
//     cout << (a + b) * c << endl;
//     return 0;
// }


// //优化：
// #include <iostream>
// using namespace std;

// int a,b,c;

// int main() {
//     cin >> a >> b >> c;
//     int r = (a + b) * c;
//     cout << r << endl;
//     return 0;
// }


//https://www.luogu.com.cn/problem/B2010
// //自己：
// #include <iostream>
// using namespace std;

// int a,b;

// int main() {
//     cin >> a >> b;
//     int r1 = a / b;
//     int r2 = a % b;
//     cout << r1 << " " << r2 << endl;
//     return 0;
// }


//整数个位：https://ac.nowcoder.com/acm/problem/21990
// //自己：
// #include <iostream>
// using namespace std;

// int a;

// int main() {
//     cin >> a;
//     cout << a % 10 << endl;
//     return 0;
// }


//整数十位：https://ac.nowcoder.com/acm/problem/21991
// //自己：
// #include <iostream>
// using namespace std;

// long long a;

// int main() {
//     cin >> a;
//     int r = a % 100 / 10;
//     cout << r << endl;
//     return 0;
// }


//时间转换：https://ac.nowcoder.com/acm/contest/18839/1031
// //自己
// #include <iostream>
// using namespace std;

// long long seconds;

// int main() {
//     cin >> seconds;
//     int h = seconds / (60 * 60);
//     int m = seconds % (60 * 60) /60;
//     int s = seconds - h * (60 * 60) - m * 60;
//     cout << h << " " << m << " " << s << endl;
//     return 0;
// }


// //优化：
// #include <iostream>
// using namespace std;

// long long seconds;

// int main() {
//     cin >> seconds;
//     cout << seconds / 60 /60 << " " << seconds / 60 % 60 << " " << seconds % 60 << endl;
//     return 0;
// }


//小鱼游泳：https://www.luogu.com.cn/problem/P1425#ide
// //自己：
// #include <iostream>
// using namespace std;

// int a,b,c,d;

// int main() {
//     cin >> a >> b >> c >> d;
//     int k = a * 60 * 60 + b * 60;
//     int s = c * 60 * 60 + d * 60;
//     int j = s - k;
//     int e = j / 60 / 60;
//     int f = j / 60 % 60;
//     cout << e << " " << f << endl;
//     return 0;
// }


//优化：
#include <iostream>
using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    int start = a * 60 + b;
    int end = c * 60 + d;
    int total = end - start;
    cout << total / 60 << " " << total % 60 << endl; 
    return 0;
}