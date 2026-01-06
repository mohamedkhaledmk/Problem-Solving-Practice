#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        char arr[x];
        bool flag = true;
        int freq[26]{};
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x; i++)
        {
            if (freq[arr[i] - 'A'] == 0)
                freq[arr[i] - 'A']++;
            else if (arr[i - 1] != arr[i])
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}
