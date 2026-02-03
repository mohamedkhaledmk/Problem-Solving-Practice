#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int a = 0, b = 0, c;
    cin >> c;
    int cntA = 0, cntB = 0;
    int arr[c];
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }

    while (cntA + cntB < c)
    {
        if (a <= b)
        {
            a += arr[cntA];
            cntA++;
        }
        else
        {
            b += arr[c - 1 - cntB];
            cntB++;
        }
    }
    cout << cntA << " " << cntB;
    return 0;
}