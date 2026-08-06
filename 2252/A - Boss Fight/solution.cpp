#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    map<long long, int> freq;
    long long sum = 0;
    
    int max = 0;
    long long val = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;
        
        if (freq[a[i]] > max) {
            max= freq[a[i]];
            val = a[i];
        }
    }
    
    if (2 * max > n + 1) {
        long long sum_others = sum - (long long)max*val;
        long long ans = sum_others + (long long)(n - max + 2) *val;
        cout << ans << "
";
    } else {
        cout << sum << "
";
    }
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