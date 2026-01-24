#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int x, y, i;
    cin >> x >> y;
    bool flag = false;
    for (i = x + 1; i <= y; i++)
    {
        flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag && i == y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}