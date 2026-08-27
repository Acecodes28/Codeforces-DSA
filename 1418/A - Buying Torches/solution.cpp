#include <iostream>
 
using namespace std;
 
void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
    long long sticks = k*(y + 1)-1;
    long long trade1 = (sticks+(x-1)-1)/(x-1);
    long long trade2 = k;
    cout << trade1 + trade2 << "
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