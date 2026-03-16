#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long oldR, newR, oldP;
        cin >> oldR >> newR >> oldP;
        oldR = oldR * oldR;
        newR = newR * newR;
        long long newP = (double)oldP * newR / oldR;

        if (newP % 10)
        {
            cout << (newP / 10 + 1) * 10 << endl;
        }
        else
            cout << (newP / 10) * 10 << endl;
    }
    return 0;
}