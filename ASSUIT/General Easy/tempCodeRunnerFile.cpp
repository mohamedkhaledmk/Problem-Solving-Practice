#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n, x, num, cnt = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        bool arr[10]{};
        bool flag = true;
        while (num)
        {
            arr[num % 10] = true;
            num /= 10;
        }
        for (int i = 0; i <= x; i++)
        {
            if (!arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cnt++;
    }
    cout << cnt;
    return 0;
}