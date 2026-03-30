#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> set1, set2;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        set1.insert(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        set2.insert(x);
    }
    int cnt = 0;
    for (auto &elem1 : set1)
    {
        for (auto &elem2 : set2)
        {
            int m = elem1 ^ elem2;
            if (set1.count(m) || set2.count(m))
                cnt++;
        }
    }
    if (cnt % 2 == 0)
        cout << "Karen";
    else
        cout << "Koyomi";

    return 0;
}