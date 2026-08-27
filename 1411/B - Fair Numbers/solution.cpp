#include <iostream>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    while (true) {
        long long temp=n;
        bool is_fair=true;
        while (temp>0) {
            int digit=temp%10;
            if (digit!=0 && n%digit!=0) {
                is_fair=false;
                break;
            }
            temp /= 10;
        }
        if (is_fair) {
            cout << n << "
";
            return;
        }
        n++;
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