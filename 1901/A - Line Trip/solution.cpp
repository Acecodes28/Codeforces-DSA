//car and fuel wala question
// number of +1 or -1 required so that in the smallest number of +-1 we can get the product of all the array lements to zero 
 
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int flag;
        int n, x;
        cin >> n >> x;
        int arr[n], path[x+1];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
 
        if(n>1)
        {
            int max=2*(x-arr[n-1]);
            for (int i=0; i<n-1; i++)
            {
                flag=arr[i+1]-arr[i];
                if(flag>max)
                max=flag;
                if(arr[0]>max)
                max=arr[0];
            }
            cout<<max<<endl;
        }
        else if(n==1)
        {
            int max=2*(x-arr[0]);
            flag=arr[0];
            if(flag>max)
            max=flag;
            if(arr[0]>max)
            max=arr[0];
            cout<<max<<endl;
        }
    }
    return 0;
}