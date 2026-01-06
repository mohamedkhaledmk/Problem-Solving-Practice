#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int arr[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x + arr[i - 1];
    }
    int maxi = 1e9;
    int idx = 0;
    for (int i = p; i < n + 1; i++)
    {
        if (arr[i] - arr[i - p] < maxi)
        {
            maxi = min(maxi, arr[i] - arr[i - p]);
            idx = i - p;
        }
    }
    cout << idx + 1;

    return 0;
}
