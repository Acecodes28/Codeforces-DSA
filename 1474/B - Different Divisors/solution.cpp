#include<iostream>
using namespace std;
 
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i<= num; i++) {
        if (num %i==0) return false;
    }
    return true;
}
 
void solve() {
    int d;
    cin >> d;
    long long p=1+d;
    while (isPrime(p) == false) {
        p++;
    }
    long long q=p+d;
    while (isPrime(q) == false) {
        q++;
    }
    cout << p * q << "
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