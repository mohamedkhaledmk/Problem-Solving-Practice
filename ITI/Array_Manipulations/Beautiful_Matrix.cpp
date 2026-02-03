#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, ans;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;
            if (x == 1)
                ans = abs(3 - i) + abs(3 - j);
        }
    }
    cout << ans;

    return 0;
}