#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; ++i) {
		cin >> a[i];
	}
	
	sort(a, a + n, greater<int>());
	bool b = true;
	while(b) {
		b = false;
		for(int i = 1; i < n; ++i) {
			if(a[i] < a[0]) {
				a[0] -= a[i];
				sort(a, a + n, greater<int>());
				b = true;
				break;
			}
		}
	}

	int sum = 0;
	for(int i = 0; i < n; ++i)
		sum += a[i];
	cout << sum << endl;

	return 0;
}
