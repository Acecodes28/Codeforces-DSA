#include <iostream>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    if (n % 2 != 0 || n < 4) {
        cout << -1 << "
";
        return;
    }
    long long min = n / 6;
    if (n % 6 != 0) {
        min++;
    }
    long long max = n / 4;
    
    cout << min << " " << max << "
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