#include <iostream>

using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int x, y, cnt = 0;
    for (int i = 0; i * i <= 1000; i++)
    {
        x = i * i;
        y = n1 - x;
        if ((y * y + i) == n2 && y >= 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}
