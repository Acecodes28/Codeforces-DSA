#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s, t;
    cin >> s >> t;
    
    int prev= 1000;
    for (int i = t.length() - 1; i >= 0; i--) {
        
        int curr= -1;
        for (int j = s.length() - 1; j >= 0; j--) {
            if (s[j] == t[i]) {
                curr = j;      
                s[j] = '*';       
                break; 
            }
        }
        
        if (curr== -1 || curr > prev) {
            cout << "NO
";
            return;
        }
        
        prev = curr;
    }
    cout << "YES
";
}
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}