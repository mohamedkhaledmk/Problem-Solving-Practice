#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[5][5] = {};
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[x - 1][y - 1] = 1;
        arr[y - 1][x - 1] = 1;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            {
                for (int k = j + 1; k < 5; k++)
                {
                    if (arr[i][j] == arr[i][k] && arr[i][k] == arr[k][j])
                    {
                        cout << "WIN";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "FAIL";
    return 0;
}