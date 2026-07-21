#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> arr(n);   // fix 1: give it size n
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        // fix 2: changed b[i], b[j] to arr[i], arr[j]
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] < arr[j]) {
                    long long temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
 
        vector<long long> a(n);   // fix 3: give it size n
        a[0] = arr[0];
        a[1] = arr[1];
 
        int flag = 1;
 
        for (int i = 2; i < n; i++) {
            if (a[i-1] == 0) {
                flag = 0;
                break;
            }
 
            a[i] = a[i-2] % a[i-1];
 
            if (a[i] != arr[i]) {
                flag = 0;
                break;
            }
        }
 
        if (flag == 1) {
            cout << a[0] << " " << a[1] << endl;
        } else {
            cout << -1 << endl;
        }
    }
 
    return 0;
}