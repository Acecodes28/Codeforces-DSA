#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    int total_elements = n * k;
    vector<long long> a(total_elements);
    for (int i = 0; i < total_elements; ++i) {
        cin >> a[i];
    }
 
    long long sum = 0;
    int jump = n / 2 + 1;
    
    for (int i = 1; i <= k; ++i) {
        sum += a[total_elements - i * jump];
    }
 
    cout << sum << "
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