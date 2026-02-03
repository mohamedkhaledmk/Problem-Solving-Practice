#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int a, b, cnt = 0;
    char c;
    cin >> a >> b;
    char arr[a][b];
    bool validA[a]{}, validB[b]{};
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
        {
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'S')
                {
                    validA[i] = true;
                    validB[j] = true;
                }
            }
        }
    int totalA = 0, totalB = 0;
    for (int i = 0; i < a; i++)
    {
        if (!validA[i])
        {
            cnt += b;
            totalA++;
        }
    }
    for (int i = 0; i < b; i++)
    {
        if (!validB[i])
        {
            cnt += a;
            totalB++;
        }
    }
    cnt -= totalA * totalB;
    cout << cnt;
    return 0;
}