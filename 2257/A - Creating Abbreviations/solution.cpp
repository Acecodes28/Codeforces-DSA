#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<char> initials;
    
    for (int i = 0; i < n; ++i) {
        string w;
        cin >> w;
        initials.push_back(w[0] - 'a' + 'A');
    }
    
    bool possible = true;
    
    for (int i = 0; i < m; ++i) {
        string a;
        cin >> a;
        for (char c : a) {
            if (find(initials.begin(), initials.end(), c) == initials.end()) {
                possible = false;
            }
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