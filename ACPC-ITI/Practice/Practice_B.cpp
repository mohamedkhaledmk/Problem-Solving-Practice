#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[3];
        cin >> n;
        string s;
        int maxi = 0, iterator = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                iterator = i;
            }
        }
        iterator++;
        string colors = "RGB";
        if (maxi > n - maxi)
        {
            cout << -1;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            int first = (iterator + 1) % 3;
            int second = (iterator + 2) % 3;
            if (arr[first] > arr[second] && arr[first])
            {
                arr[first]--;
                s += colors[first];
            }
            else if (arr[second] > arr[first] && arr[second])
            {
                arr[second]--;
                s += colors[second];
            }
            else
            {
                s += colors[iterator];
                arr[iterator]--;
            }
            iterator = (iterator + 1) % 3;
        }
        cout << s << endl;
    }
    return 0;
}