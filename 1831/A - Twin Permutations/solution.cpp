#include <iostream>
 
using namespace std;
 
int main() 
{
    int t; 
    cin>> t; 
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
 
        int target=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>=target)
            target=a[i];
        }
        for(int i=0; i<n; i++)
        {
            b[i]= target-a[i]+1;
            cout<< b[i]<< " ";
        }
        cout<<"
";
    }
    return 0;
}