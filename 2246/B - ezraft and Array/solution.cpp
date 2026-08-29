#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    
    if(n==1){
        cout<<1<<"
";
        return;
    }
    if(n==2){
        cout<<-1<<"
";
        return;
    }
    
    vector<long long> a(n);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    long long s=6;
    
    for(int i=3;i<n;i++){
        a[i]=s;
        s*=2;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<"
";
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}