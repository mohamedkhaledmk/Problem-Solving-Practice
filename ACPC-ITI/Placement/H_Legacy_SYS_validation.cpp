#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int freq[10]{};
    while (num)
    {
        freq[num % 10]++;
        if (freq[num % 10] > 1)
        {
            cout << "YES";
            return 0;
        }
        num /= 10;
    }
    cout << "NO";
    return 0;
}