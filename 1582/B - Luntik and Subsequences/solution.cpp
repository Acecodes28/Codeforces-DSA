#include <iostream>
#include <cmath>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    long long zeros = 0, ones = 0;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x == 0) {
            zeros++;
        } else if (x == 1) {
            ones++;
        }
    }
    
long long ans = ones * (long long)pow(2, zeros);
    
    cout << ans << "
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