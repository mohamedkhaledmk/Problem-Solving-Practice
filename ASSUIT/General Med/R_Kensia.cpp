#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    string fullS, s = "", s1 = "", s2;
    cin >> fullS;
    int pos = fullS.find('|');
    s = fullS.substr(0, pos);
    s1 = fullS.substr(pos + 1);
    cin >> s2;
    int s1Sz = s.size();
    int s2Sz = s1.size();
    int s3Sz = s2.size();
    int allSizes = (s1Sz + s2Sz + s3Sz);
    // cout << allSizes << s1Sz << s2Sz << s3Sz;
    if (allSizes % 2 != 0 || (s1Sz > (allSizes / 2) || s2Sz > (allSizes / 2)))
    {
        cout << "Impossible";
        return 0;
    }
    // for(int i=0;i<s1Sz;i++)
    cout << s;
    int i = s1Sz;
    for (; i < allSizes / 2; i++)
        cout << s2[i - s1Sz];
    i = allSizes / 2 - s1Sz;
    cout << "|";
    for (; i < s3Sz; i++)
        cout << s2[i];
    cout << s1;
    // for (int i = allSizes / 2; i <)
    // if (s1Sz > s2Sz)
    // {
    //     cout << s << "|" << s1 << s2;
    // }
    // else
    // {
    //     cout << s << s2 << "|" << s1;
    // }

    return 0;
}