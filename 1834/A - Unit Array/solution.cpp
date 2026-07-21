#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() 
{
    int t; 
    cin>> t; 
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        int countones=0;
        int countminusones=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                countones++;
            }
            else if(arr[i]==-1)
            {
                countminusones++;
            }
        }
            while(countminusones>countones)
            {
                count++;
                countminusones--;
                countones++;
            }
            if(countminusones%2!=0)
            count++;
            cout<< count<<endl;
    }
    return 0;
}