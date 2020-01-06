#include <iostream>
#include <algorithm>

using namespace std;

int sum(int a[5][5], int i, int j) {
	int s = 0;
	s += a[i-1][j];
	s += a[i][j + 1];
	s += a[i][j];
	s += a[i + 1][j];
	s += a[i][j - 1];
	return s;
}

int main() {
	int a[5][5], b[5][5];
	
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			b[i][j] = 1;
			a[i][j] = 0;
		}
	}
	for(int i = 1; i <= 3; ++i) {
		for(int j = 1; j <= 3; ++j) {
			cin >> a[i][j];
		}
	}

	for(int i = 1; i <= 3; ++i) {
		for(int j = 1; j <= 3; ++j) {
			b[i][j] = (b[i][j] + sum(a, i, j)) % 2;
		}
	}

	for(int i = 1; i <= 3; ++i) {
		for(int j = 1; j <= 3; ++j) {
			cout << b[i][j];
		}
		cout << endl;
	}

	return 0;
}
