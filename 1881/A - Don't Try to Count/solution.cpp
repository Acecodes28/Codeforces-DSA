#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    int ops = 0;
    
    while (ops <= 6) {
        if (x.find(s) < x.length()) {
            cout << ops << "
";
            return;
        }
        x += x;
        ops++;
    }
    
    cout << -1 << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}