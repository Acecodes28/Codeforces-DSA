#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        map<char, int> freq;
        for (char c : s)
            freq[c]++;
 
        int odd = 0;
        for (auto& p : freq)
            if (p.second % 2 != 0)
                odd++;
 
        if (odd <= k + 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
}