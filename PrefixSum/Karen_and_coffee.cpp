#include <iostream>

using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int partial[200002]{};
    int prefix[200002]{};
    int x, y;
    int mini = 10e8;
    while (n--)
    {
        cin >> x >> y;
        partial[x] += 1;
        partial[y + 1] -= 1;
        mini = min(mini, x);
    }
    for (int i = 1; i < 200002; i++)
    {
        partial[i] += partial[i - 1];
    }
    for (int i = mini; i < 200002; i++)
    {
        prefix[i] = partial[i] >= k;
        prefix[i] += prefix[i - 1];
    }
    while (q--)
    {
        cin >> x >> y;
        cout << prefix[y] - prefix[x - 1] << endl;
    }
    return 0;
}