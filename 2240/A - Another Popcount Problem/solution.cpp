#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long popcount = 0;
    long long power= 1; 
    
    while (n >= power) {
        long long filled = min(k, n / power);
        popcount += filled;
        n -= filled * power;
        power *= 2;
    }
    
    cout << popcount << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}