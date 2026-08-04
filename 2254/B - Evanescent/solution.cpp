#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int L = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i+1]) {
            L++;
        }
    }
    
    int max_reduction = 0;
 
    for (int i = 1; i < n - 1; ++i) {
        int before = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
        int after = (s[i - 1] != s[i + 1]);
        
        int current_reduction = before - after;
        
        max_reduction = max(max_reduction, current_reduction);
    }
    
    cout << L - max_reduction << "
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