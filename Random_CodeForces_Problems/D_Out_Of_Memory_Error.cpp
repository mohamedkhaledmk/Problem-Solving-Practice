#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> base(n+1), cur(n+1);
        vector<int> last_update(n+1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> base[i];
            cur[i] = base[i];
        }

        int last_reset = 0;

        for (int i = 1; i <= m; i++) {
            int b;
            long long c;
            cin >> b >> c;

            if (last_update[b] < last_reset) {
                cur[b] = base[b];
                last_update[b] = last_reset;
            }

            if (cur[b] + c > h) {
                last_reset = i;
            } else {
                cur[b] += c;
                last_update[b] = i;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (last_update[i] < last_reset) {
                cout << base[i] << " ";
            } else {
                cout << cur[i] << " ";
            }
        }
        cout << "\n";
    }
}