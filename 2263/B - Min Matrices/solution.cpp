#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >>n>>k;
 
    if (k < n|| k>=2 * n) {
        cout << -1 << "
";
        return;
    }
    
    vector<vector<int>> A(n, vector<int>(n, 0));
    int y = 2 * n - k; 
    int s = y - 1;
    
    int val = 1;
    for (int i = 0; i < s; i++) {
        A[i][i] = val++;
    }
    A[s][s] = val++;
    for (int i =s+1; i<n; i++) {
        A[i][s]=val++;
    }
 
    for (int j=s+1; j<n; j++) {
        A[s][j]=val++;
    }
    
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (A[i][j]==0) {
                A[i][j]=val++;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << A[i][j] << (j==n -1 ?"": " ");
        }
        cout << "
";
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