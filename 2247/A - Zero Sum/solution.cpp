#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == -1) {
            cnt++;
        }
    }
    
    if (n % 2 != 0) {
        cout << "NO
";
    } else {
        int req = n / 2;
        
        if (cnt % 2 == req % 2) {
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