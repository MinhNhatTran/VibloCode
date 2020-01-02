#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n], d[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        d[i] = 1;
    }
 
    if(n == 1) {
        cout << "YES" << endl;
        return 0;
    }
    
    for(int i = 0; i < n-1; ++i) {
        if (d[i] > 0) {
            for(int j = i + 1; j < n; ++j) {
                if(a[j] == a[i]) {
                    d[i]++;
                    d[j] = 0;
                }       
            }
        }   
    }
    
    sort(d, d + n, greater<int>());
    cout << (( (d[0] - d[1] - 1 - (n - d[0] - d[1]) > 0) ) ? "NO" : "YES") << endl; 
    
    return 0;
}
