#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int first_A = -1;
    int last_B = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') {
            first_A = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'B') {
            last_B = i;
            break;
        }
    }
    if (first_A == -1 || last_B == -1 || first_A > last_B) {
        cout << 0 << "
";
    } else {
        cout << last_B - first_A << "
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