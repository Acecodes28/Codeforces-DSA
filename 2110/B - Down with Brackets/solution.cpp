#include<iostream>
#include<string>
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=1;i<(int)s.length()-1;i++){
        if(s[i]=='('){
            sum++;
        }else{
            sum--;
        }
        if(sum<0){
            cout<<"YES
";
            return;
        }
    }
    cout<<"NO
";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}