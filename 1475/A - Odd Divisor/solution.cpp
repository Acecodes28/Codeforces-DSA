#include <iostream>
 
using namespace std;
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if ((n & (n - 1)) == 0) {
            cout << "NO
";
        } else {
            cout << "YES
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}