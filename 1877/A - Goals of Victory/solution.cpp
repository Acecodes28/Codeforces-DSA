#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    int t; 
    cin >> t;
    while(t--)
    {
        int sum=0;
        int n;
        cin>>n;
         vector <int> arr(n-1);
         for (int i=0; i < arr.size(); i++)
         {
            cin>>arr[i]; 
         }
          for (int i=0; i < arr.size(); i++)
         {
            sum=sum+arr[i];
         }
         if (sum<0)
         {
            cout<<sum-(sum*2)<< endl; 
         }
         else if (sum>=0) {
            cout << sum-(sum*2) << endl;
         }
         }
    }