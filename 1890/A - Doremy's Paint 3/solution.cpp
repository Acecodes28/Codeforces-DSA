#include <iostream>
#include <vector>
#include <map>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        counts[val]++;
    }
    if (counts.size() > 2) {
        cout << "No
";
    } 
 
    else if (counts.size() == 1) {
        cout << "Yes
";
    } 
 
    else {
        auto it = counts.begin();
        int f1 = it->second;
        advance(it, 1);
        int f2 = it->second;
        
        if (abs(f1 - f2) <= 1) {
            cout << "Yes
";
        } else {
            cout << "No
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