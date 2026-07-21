#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n;
    int sum_ser=0, sum_dima=0;
    int turn=1;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    int begin=0;
    int ending=n-1;
    while(begin<=ending )
    {
        int max_sum=max(arr[begin], arr[ending]);
        if(turn==1)
        {
            sum_ser=sum_ser+max_sum;
            turn=0;
        }
        else
        {
            sum_dima=sum_dima+max_sum;
            turn=1;
        }
 
        if(arr[begin]> arr[ending])
        begin++;
        else
        ending--;
    }
    cout<<sum_ser << " " << sum_dima;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}