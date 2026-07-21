#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        
        int heights[5]; 
 
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
 
        int max = heights[0];
        int min = heights[0];
        for (int i = 1; i < n; i++) {
            if (heights[i] > max) {
                max = heights[i];
            }
            if (heights[i] < min) {
                min = heights[i];
            }
        }
        int k = max - min + 1;
 
        cout << k << "
";
    }
    
    return 0;
}