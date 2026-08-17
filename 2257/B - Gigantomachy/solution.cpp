#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    long long ha = 0;
    for (int i = 0; i < n - 1; ++i) {
        ha += a[i] - (a[i+1] - 1);
    }
    ha += a[n - 1];
    long long hb = 0;
    for (int i = 0; i < m - 1; ++i) {
        hb += b[i] - (b[i+1] - 1);
    }
    hb += b[m - 1];
    
    if (ha >= hb) {
        cout << 1 << "
";
    } else {
        cout << 2 << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}