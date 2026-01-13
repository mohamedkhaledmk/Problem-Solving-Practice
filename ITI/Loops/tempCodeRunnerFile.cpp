#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n] = {0};
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[x - 1][y - 1] = 1;
        arr[y - 1][x - 1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (sum > 2)
        {
            cout << "WIN";
            return 0;
        }
    }
    cout << "FAIL";
    return 0;
}