#include <iostream>
 
using namespace std;
 
void solve() {
    int n, k;
    long long m;
    cin >> n >> k >> m;
    
    if (k > m) {
        cout << "NO
";
    } else {
        cout << "YES
";
        
        long long num = m - k + 1;
        
        for (int i = 0; i < n; i++) {
            if (i == k - 1) {
                cout << num << " ";
            } 
            else {
                cout << 1 << " ";
            }
        }
        cout << "
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