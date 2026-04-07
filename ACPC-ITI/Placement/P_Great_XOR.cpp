#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, nCnt = 0;
        cin >> n;
        int i = 1;
        for (; i <= 100; i++)
        {
            if (n <= pow(2, i))
            {
                break;
            }
        }
        int num = pow(2, i);
        int cnt = num - 1;
        if (n == num)
            cout << cnt << endl;
        else
        {
            cout << cnt - n << endl;
        }
    }
    return 0;
}