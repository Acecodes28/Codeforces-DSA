#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    if (s.front() != s.back()) {
        s.front() = s.back();
    }
 
    cout << s << "
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