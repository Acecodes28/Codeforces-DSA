//crazy question stepan and permutation
 
#include <iostream>
#include <numeric>
#include <cmath>
 
using namespace std;
 
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
 
void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    int g = gcd(x, y);
    bool possible = true;
    
    for (int i = 1; i <= n; ++i) {
        int p_i;
        cin >> p_i;
        
        if (abs(p_i - i) % g != 0) {
            possible = false;
        }
    }
    
    if (possible) {
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