#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, area;
        cin >> x1 >> y1 >> x2 >> y2 >> area;
        double oldR = sqrt(area);
        double GD = (sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2)));
        cout << fixed << setprecision(6) << pow(oldR - GD, 2) / 2 << endl;
    }

    return 0;
}