#include <bits/stdc++.h>
using namespace std;

void change(string &s)
{
    if (s == "right")
        s = "down";
    else if (s == "down")
        s = "left";
    else if (s == "left")
        s = "up";
    else if (s == "up")
        s = "right";
}

int main()
{
    int n, m;
    cin >> n >> m;
    long long negInf = numeric_limits<long long>::lowest();
    vector<vector<long long>> v(n + 2, vector<long long>(m + 2, negInf));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> v[i][j];
        }
    }
    string dir = "right";
    int i = 1, j = 1;
    for (int cnt = 1; cnt <= n * m; cnt++)
    {
        int currI = i, currJ = j;
        if (dir == "right")
        {
            currJ++;
        }
        else if (dir == "left")
        {
            currJ--;
        }
        else if (dir == "up")
        {
            currI--;
        }
        else if (dir == "down")
        {
            currI++;
        }
        cout << v[i][j] << " ";
        v[i][j] = negInf;
        if (v[currI][currJ] == negInf)
        {
            change(dir);
        }
        if (dir == "right")
        {
            j++;
        }
        else if (dir == "left")
        {
            j--;
        }
        else if (dir == "up")
        {
            i--;
        }
        else if (dir == "down")
        {
            i++;
        }
    }

    return 0;
}