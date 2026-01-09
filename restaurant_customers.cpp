#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int l[num] = {}, r[num]{};
    vector<long long> v;
    for (int i = 0; i < num; i++)
    {
        cin >> l[i] >> r[i];
        v.push_back(l[i]);
        v.push_back(r[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int partial[num + num + 1]{};
    for (int i = 0; i < num; i++)
    {
        l[i] = lower_bound(v.begin(), v.end(), l[i]) - v.begin();
        r[i] = lower_bound(v.begin(), v.end(), r[i]) - v.begin();
        partial[l[i]] += 1;
        partial[r[i]] -= 1;
    }
    int s = 0;
    for (int i = 1; i <= num + num; i++)
    {
        partial[i] += partial[i - 1];
        s = max(s, partial[i]);
    }
    cout << s;
    return 0;
}