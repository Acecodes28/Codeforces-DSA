#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
 
        int sum = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == 2) sum++;
 
        if (sum == 0) {
            cout << 1 << endl;  // all 1s, any k works, print smallest
        } else if (sum % 2 != 0) {
            cout << -1 << endl;
        } else {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 2) count++;
                if (count * 2 == sum) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
}