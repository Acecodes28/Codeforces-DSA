#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n, flag=0;
        int count=0;
        cin>>n;
        string arr;
        cin>>arr;
        for(int i=0; i<n; i++)
        {
            if(arr[i]=='.' && i+1<n && i+2<n && arr[i+1]=='.' && arr[i+2]=='.') // ##...#..#.
            {
                flag=1;
                break;
            }
            if(arr[i]=='.')
            count++;
        }
        if(flag==1)
        cout<<2<<endl;
        else
        cout<<count<<endl;
    }
    return 0;
}