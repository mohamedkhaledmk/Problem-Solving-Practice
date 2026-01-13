#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];
    }
    bool outDated[n]{};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1] && arr[i][2] < arr[j][2])
                outDated[i] = true;
        }
    }
    int min = 9999999, minIdx = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (!outDated[i] && arr[i][3] < min)
        {
            min = arr[i][3];
            minIdx = i;
        }
    }
    cout << minIdx + 1;
    return 0;
}