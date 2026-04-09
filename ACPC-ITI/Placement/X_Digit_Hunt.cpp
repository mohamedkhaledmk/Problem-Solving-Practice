#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    if (n < 10)
        n++;
    cnt += n % 10;
    while (n /= 10)
    {
        cnt += 10;
    }
    cout << cnt;
    return 0;
}