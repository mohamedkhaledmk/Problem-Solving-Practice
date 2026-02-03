#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define INF 1e9

bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    return b.second < a.second;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v(n, 0);
        vector<ll> spikes(m);
        for (ll i = 0; i < n; i++)
        {
            // v[i].first = i;
            cin >> v[i];
        }
        ll sz = m;
        for (ll i = 0; i < sz; i++)
        {
            cin >> spikes[i];
        }
        vector<pair<ll, ll>> right;
        vector<pair<ll, ll>> left;
        sort(spikes.begin(), spikes.end());
        for (ll i = 0; i < n; i++)
        {
            // cout << "v[i]" << v[i] << endl;
            auto it = upper_bound(spikes.begin(), spikes.end(), v[i]);
            if (it == spikes.end())
            {
                right.push_back(make_pair(i, INF));
            }
            else
            {
                // cout << "pushing " << *it << "-" << v[i] << " = " << *it - v[i] << "      ";
                right.push_back(make_pair(i, *it - v[i]));
            }
            if (it == spikes.begin())
            {
                left.push_back(make_pair(i, -INF));
            }
            else
            {
                it--;
                left.push_back(make_pair(i, *it - v[i]));
            }
        }
        string w;
        cin >> w;
        vector<bool> alive(n, true);
        // vector<ll> live(k + 1, n);
        sort(right.rbegin(), right.rend(), compare);
        sort(left.begin(), left.end(), compare);

        ll living = n,
           curr = 0, lIdx = 0, rIdx = 0;

        for (ll j = 0; j < k; j++)
        {
            if (w[j] == 'L')
            {
                curr--;
                if (left[lIdx].second == curr)
                {
                    while (left[lIdx].second == curr)
                    {
                        if (alive[left[lIdx].first])
                        {
                            living--;
                            alive[left[lIdx].first] = false;
                        }
                        lIdx++;
                    }
                }
            }
            else
            {
                curr++;
                if (right[rIdx].second == curr)
                {

                    while (right[rIdx].second == curr)
                    {

                        if (alive[right[rIdx].first])
                        {
                            living--;
                            alive[right[rIdx].first] = false;
                        }
                        rIdx++;
                    }
                }
            }
            cout << living << " ";
        }
        cout << endl;
    }

    return 0;
}
