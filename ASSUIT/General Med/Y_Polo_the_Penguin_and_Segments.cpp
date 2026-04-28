#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> freq(n + 2, 0);
    int x, y;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        cnt += y - x + 1;
    }
    int moves = 0;
    while ((cnt + moves) % k != 0)
    {
        moves++;
    }
    cout << moves;
    return 0;
}