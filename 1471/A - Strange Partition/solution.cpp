#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        
        vector <int> arr(n);
        long long sum=0; 
        long long max=0; 
        long long min=0; 
 
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
            sum+=arr[i]; 
            max+=(arr[i] + x - 1) / x; 
        }
         min=(sum + x - 1) / x;
         cout<< min<< " " << max<< "
"; 
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}