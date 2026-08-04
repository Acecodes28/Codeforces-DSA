#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    vector<long long> tokens(3);
    for (int i = 0; i < 3; ++i) {
        cin >> tokens[i];
    }
    
    sort(tokens.begin(), tokens.end());
    
    long long left_dist = tokens[1] - tokens[0];
    long long right_dist = tokens[2] - tokens[1];
    
    cout << min(left_dist, right_dist) << "
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