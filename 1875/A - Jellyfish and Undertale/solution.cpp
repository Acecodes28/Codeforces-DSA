#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    int t; 
    cin >> t;
    while(t--)
    {
        long long sum = 0;
        int n, a, b;
        cin >> a >> b >> n;
        sum = b;
        vector <int> arr(n);
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
            if (arr[i] < a) 
                sum = sum + arr[i];
            else
                sum = sum + a - 1;
        }
        cout << sum << endl;  
    }
}