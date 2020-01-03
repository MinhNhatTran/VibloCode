#include <iostream>
#include <algorithm>

using namespace std;

int max3(int a, int b, int c) {
	if (a > b) {
		return (a > c ? a : c);
	}
	else {
		return (b > c ? b : c);
	}
}

int min3(int a, int b, int c) {
	if (a < b) {
		return (a < c ? a : c);
	}
	else {
		return (b < c ? b : c);
	}
}

int main() {
	long long n;
	cin >> n;
	bool neg = (n < 0 ? true : false);

	n = abs(n);
	int lastDigit = n % 10;
	long long a, b;
	a = n / 10;
	b = (n / 100) * 10 + lastDigit;

	if (neg) {
		long long res = min3(n, a, b);
		cout << (res <= 0 ? "" : "-") << res << endl;
	}
	else {
		cout << max3(n, a, b) << endl;
	}

	return 0;
}
