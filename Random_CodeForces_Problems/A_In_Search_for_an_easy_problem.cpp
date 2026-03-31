#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i])
            {
                cout<<"HARD";
                return 0;
            }
    }
    cout<<"EASY";
    return 0;
    
    return 0;
} // namespace stdint main()
