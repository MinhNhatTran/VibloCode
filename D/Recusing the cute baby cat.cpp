#include <iostream>

using namespace std;

int main() {
	int n, m;
    cin >> n >> m;
    
    int count = 0;
    while(n != m) {
        if(n > m) {
            count += (n - m);
            n = m;
        }
        else {
            // thay vi tang n len thi co the giam m di
            if(m % 2 == 0) {
                count++;
                m /= 2;
            }
            else {
                count++;
                m += 1;
            }
        }
    }
    cout << count << endl;

	return 0;
}
