#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    deque<int> dq;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (!st.count(val))
        {
            dq.push_front(val);
            st.insert(val);
        }
        if (dq.size() > k)
        {
            int removedVal = dq.back();
            dq.pop_back();
            st.erase(removedVal);
        }
    }
    cout << dq.size() << endl;
    for (auto elem : dq)
        cout << elem << " ";

    return 0;
}