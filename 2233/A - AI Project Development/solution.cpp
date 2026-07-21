#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    int t; 
    cin >> t;
    while(t--)
    {
        int hours1 = 0, hours2 = 0;
        int n, x, y, z; 
        cin >> n >> x >> y >> z;
 
        for(int hi = 1; hi <= 20000; hi++)
        {
            int h = hi*x + hi*y;
            if(h >= n)
            {
                hours1 = hi;
                break;
            }
        }
 
        for(int hi = 1; hi <= 20000; hi++)
        {
            int h;
            if(hi <= z)
                h = hi*x;
            else
                h = hi*x + (hi-z)*y*10;
            if(h >= n)
            {
                hours2 = hi;
                break;
            }
        }
 
        if(hours1 < hours2)
            cout << hours1 << endl;
        else
            cout << hours2 << endl;
    }
}