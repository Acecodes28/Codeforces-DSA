#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
 
    vector<int> pref(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        pref[i] = pref[i - 1];
        if (s[i - 1] == s[i - 2]) {
            pref[i]++;
        }
    }
 
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
 
        int bad_pairs = 0;
        if (l < r) {
            bad_pairs = pref[r] - pref[l];
        }
 
        if (bad_pairs <= 2 * k) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
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