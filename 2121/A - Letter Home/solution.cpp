#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, s;
    cin>>n>>s;
    
    vector<int> x(n);
    for (int i=0; i<n; i++) {
        cin>>x[i];
    }
    
    int l=x.front();
    int r=x.back();
    
    int p1=abs(s-l)+abs(r-l);
    int p2=abs(s-r)+abs(r-l);
    
    cout<<min(p1,p2)<<"
";
}
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}