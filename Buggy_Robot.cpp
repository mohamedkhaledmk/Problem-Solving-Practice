#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int freq[2]{};
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'U')
        {
            freq[0]++;
        }
        else if (c == 'R')
        {
            freq[1]++;
        }
        else if (c == 'D')
        {
            freq[0]--;
        }
        else
        {
            freq[1]--;
        }
    }

    cout << n - (abs(freq[0]) + abs(freq[1]));

    return 0;
}
