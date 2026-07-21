#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int min_gap = 2e9;
 
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << 0 << "
";
            return;
        }
        min_gap = min(min_gap, a[i + 1] - a[i]);
    }
 
    cout << (min_gap / 2) + 1 << "
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