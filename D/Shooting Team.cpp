#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; ++i)
		cin >> a[i];

	int players = 0;
	for(int i = 0; i < n; ++i)
		if(a[i] <= (5 - k))
			players++;

	if(players < 3) {
		cout << 0 << endl;
		return 0;
	}
	cout << (players / 3) << endl;

	return 0;
}
