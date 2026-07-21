// swap untill non decreasing order
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int flag;
        int n, k;
        cin >> n >> k;
        int arr[n];
        int copy[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if (n==1){
            cout<<"YES"<<endl;
        }
        else {
        if (k>=2)
        {
            cout<<"YES"<<endl;
        }
        else if (k==1)
        {
            for (int i=0; i<n-1; i++)
            {
                if (arr[i]<=arr[i+1])
                flag=1;
                else 
                {
                    flag=0;
                    break;
                }
            }
            if (flag==1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}