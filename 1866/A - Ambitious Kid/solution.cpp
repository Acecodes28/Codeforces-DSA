#include <bits/stdc++.h>
using namespace std;
int main() 
{
        int n;
        cin>>n;
        int arr[n], diff[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            diff[i]=abs(arr[i]);
        }
        sort(diff, diff+n);
        cout<<diff[0];
        return 0;
}