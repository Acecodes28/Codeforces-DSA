#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        bool flag = true;
        for (int r = 0; r < k; r++) {
            int ones_count = 0;
            for (int i = r; i < n; i = i + k) {
                if (s[i] == '1') {
                    ones_count++;
                }
            }
            if (ones_count % 2 != 0) {
                cout << "NO" << endl;
                flag = false;
                break;           
            }
        }
 
        if (flag) {
            cout << "YES" << endl;
        }
    }
    return 0;
}