#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string n;
    cin >> n;
 
    if(n[0] != '1') 
    {
        cout << "NO";
        return 0; 
    }
 
    int count = 0;
 
    for(int i = 0; i < n.length(); i++)
    {
        if(n[i] != '1' && n[i] != '4') 
        {
            cout << "NO";
            return 0;
        }
        if(n[i] == '4') 
        {
            count++;
            if(count > 2) {
                cout << "NO";
                return 0;
            }
        } else {
            count = 0; 
        }
    }
    cout << "YES";
    return 0;
}