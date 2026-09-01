#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    if (n % 4 != 0) {
        cout << "NO
";
        return;
    }
    
    cout << "YES
";
    
    for (int i = 1; i <= n / 2; i++) {
        cout << i * 2 << " ";
    }
    
    for (int i = 1; i < n / 2; i++) {
        cout << i * 2 - 1 << " ";
    }
    cout << (n - 1) + (n / 2) << "
";
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