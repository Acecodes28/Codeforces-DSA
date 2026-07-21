#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector <int> arr(n);
 
        for(int i=0; i<arr.size(); i++)
        {
            cin>>arr[i];
        }
 
        int zeroyes=0;
        int maximumrange=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==0)
            {
                zeroyes++;
                maximumrange= max(maximumrange, zeroyes);
            }
            else if (arr[i]==1)
            {
                maximumrange= max(maximumrange, zeroyes);
                zeroyes=0;
            }
        }
        cout << maximumrange << endl; 
 
    }
}