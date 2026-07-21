#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    long long c;
    cin >> n >> c;
 
    vector<long long> a(n), b(n);
    long long sum_a = 0, sum_b = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
 
    if (sum_a < sum_b) {
        cout << -1 << "
";
        return;
    }
 
 
    long long diff = sum_a - sum_b;
 
    int flag1=1;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            flag1=0;
            break;
        }
    }
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    int flag2=1;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            flag2=0;
            break;
        }
    }
 
    long long ans = -1;
    if ( flag1==1 && flag2==1 ) {
        ans = min(diff, c + diff);
    } else if (flag1==1) {
        ans = diff;
    } else if (flag2==1) {
        ans = c + diff;
    }
 
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