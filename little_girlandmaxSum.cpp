#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> nums(a);
    for (int i = 0; i < a; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());
    vector<int> prefix(a + 1, 0);
    for (int i = 1; i <= a; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i - 1];
    }

    int ctr = 0;
    for (int i = 0; i < b; i++)
    {
        int x, y;
        cin >> x >> y;
        ctr += prefix[a] - prefix[a - y + x - 1];
    }
    cout << ctr;
    return 0;
}