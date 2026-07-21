#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
void solve() {
    string a;
    cin >> a;
 
    int counter = 0;
    int index = 0;
    
    while (index < (int)a.length() - 1) {
        if (a[index] != a[index+1]) {
            counter++;
            a.erase(index, 2);
            index = 0;
        }
        else {
            index++;
        }
    }
    
    if (counter % 2 != 0)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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