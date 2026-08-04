#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    int a_even_1s = 0, a_odd_1s = 0;
    int b_even_1s = 0, b_odd_1s = 0;
    
 
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0) {
                a_even_1s++;
            } else {
                a_odd_1s++;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (b[i] == '1') {
            if (i % 2 == 0) {
                b_even_1s++;
            } else {
                b_odd_1s++;
            }
        }
    }
    if (a_even_1s == b_even_1s && a_odd_1s == b_odd_1s) {
        cout << "YES
";
    } else {
        cout << "NO
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