#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    int markedCols[c]{};
    int markedRows[r]{};
    for (int i = 0; i < r; i++)
    {
        bool flag = true;
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
            {
                flag = false;
            }
        }
        if (flag)
            markedRows[i] = 1;
    }
    for (int j = 0; j < c; j++)
    {
        bool flag = true;
        for (int i = 0; i < r; i++)
        {
            if (arr[i][j] == '.')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            markedCols[j] = 1;
        }
    }
    int noRows = 0, noCols = 0;
    for (int i = 0; i < r; i++)
    {
        if (markedRows[i])
            noRows++;
    }
    for (int i = 0; i < c; i++)
    {
        if (markedCols[i])
            noCols++;
    }
    cout << noCols * noRows << " " << max(noCols, noRows);

    return 0;
}