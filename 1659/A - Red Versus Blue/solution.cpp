#include <iostream>
#include <string>
using namespace std;
 
void solve() {
    int n, r, b;
    cin >> n >> r >> b;
    
    int g = b + 1;
    int base = r / g;
    int rem = r % g;
    for (int i = 0; i < g; i++) {
        int cur = base;
        if (i < rem) {
            cur++;
        }
        for (int j = 0; j < cur; j++) {
            cout << 'R';
        }
        if (i < g - 1) {
            cout << 'B';
        }
    }
    cout << "
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