#include <iostream>

using namespace std;

int main()
{
    int x, y, val, cnt = 0;
    cin >> x >> y;
    int arr[101]{};
    for (int i = 1; i <= x; i++)
    {
        cin >> val;
        if (arr[val] == 0)
        {
            cnt++;
            arr[val] = i;
        }
    }
    if (y > cnt)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES" << endl;
    }
    cnt = 0;
    for (int i = 0; i < 101 && (cnt < y); i++)
    {
        if (arr[i])
        {
            cnt++;
            cout << arr[i] << " ";
        }
    }

    return 0;
}