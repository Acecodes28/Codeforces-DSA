#include <iostream>
 
using namespace std;
 
void solve() {
    long long x0, n;
    cin >> x0 >> n;
 
    long long d = 0;
    long long rem = n % 4;
 
    if (rem == 0) {
        d = 0;
    } else if (rem == 1) {
        d = -n;
    } else if (rem == 2) {
        d = 1;
    } else if (rem == 3) {
        d = n + 1;
    }
 
    if (x0 % 2 == 0) {
        cout << x0 + d << "
";
    } else {
        cout << x0 - d << "
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