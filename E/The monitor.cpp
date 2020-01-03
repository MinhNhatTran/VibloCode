#include <iostream>
#include <algorithm>

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a, b;
	int c, d;
	cin >> a >> b >> c >> d;

	if ( (a / (b * 0.1)) == (c / (d * 0.1)) ) {
		cout << "0/1" << endl;
	}
	else {
		if (a > b) {
			swap(a, b);
			swap(c, d);
		}

		// quy dong mau so
		a *= d;
		c *= b;
		b = d = b * d;

		int gcd = __gcd(abs(a - c), c);
		cout << (abs(a - c) / gcd) << "/" << (max(a, c) / gcd) << endl;
	}

	return 0;
}
