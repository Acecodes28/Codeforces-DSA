#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int balance = 0;
    int moves = 0;
 
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
            if (balance < 0) {
                moves++;
                balance = 0;
            }
        }
    }
    cout << moves << "
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