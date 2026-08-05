//1 https://www.luogu.com.cn/problem/B2084
/*质因数分解找最大：
    首先排除1和它本身(n)，先找到最小的那个因数m1，
    再用 n / m1 就找到最大的因数了
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int i = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n / i << endl;
            break;
        }
    }

    return 0;
}