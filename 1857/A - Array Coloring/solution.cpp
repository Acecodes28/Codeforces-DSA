#include <iostream>
#include <vector>
 
using namespace std;
 
int main ()
{
    int t;
    cin >> t ; 
    while(t--)
    {
        int n; int sum=0;
        cin  >> n; 
        vector <int> arr(n); 
        for(int i=0; i<arr.size(); i++)
        {
            cin >> arr[i];
            sum=sum+arr[i];
        }
        if (sum%2==0)
        {
            cout<< "yes" << endl;
        }
        else {
            cout<< "no"<< endl;
        }
    }
}
 