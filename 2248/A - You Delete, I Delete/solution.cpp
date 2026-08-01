#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int bob = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            bob= i;
            break;
        }
    }
    if (bob != -1) {
        s.erase(bob, 1);
    }
   
    int alice = -1;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '0' && s[i+1] == '1') {
            alice = i;
            break; 
        }
    }
    if (alice != -1) {
        s.erase(alice, 1);
    } 
    else {
        int last = -1;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                last = i;
                break;
            }
        }
        if (last!= -1) {
            s.erase(last, 1);
        }
    }
    cout << s << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t > 0) {
        solve();
        t--;
    }
    return 0;
}