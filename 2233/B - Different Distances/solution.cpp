#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 == 0) {
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            for (int i = 1; i <= n; i++) {
                cout << i << " " << i << " ";
            }
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << "
";
        } 
        else {
            int mid = (n + 1) / 2;
            
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            for (int i = 1; i <= n; i++) {
                cout << i << " " << i << " ";
            }
            for (int i = 1; i <= n; i++) {
                if (i == mid) {
                    cout << mid + 1 << " ";
                } else if (i == mid + 1) {
                    cout << mid << " ";
                } else {
                    cout << i << " ";
                }
            }
            cout << "
";
        }
    }
    return 0;
}