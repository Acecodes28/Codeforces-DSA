#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
 
    if (a == b) {
        cout << 0 << "
";
        return;
    }
 
    long long larger = max(a, b);
    long long smaller = min(a, b);
 
    if (larger % smaller != 0) {
        cout << -1 << "
";
        return;
    }
 
    long long quotient = larger / smaller;
    int powerOfTwoCount = 0;
 
    while (quotient % 2 == 0) {
        powerOfTwoCount++;
        quotient /= 2;
    }
 
    if (quotient != 1) {
        cout << -1 << "
";
        return;
    }
 
    int operations = powerOfTwoCount / 3;
    if (powerOfTwoCount % 3 != 0) {
        operations++;
    }
 
    cout << operations << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}