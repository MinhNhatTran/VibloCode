#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int digitSum(int n) {
	int s = 0;
	while(n > 0) {
		s += (n % 10);
		n /= 10;
	}
	return s;
}

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	vector<int> res;
	for(int i = 0 ; i <= 81; ++i) {
		long long x = b * pow(i, a) + c;
		if(0 < x && x < 1e9 && digitSum(x) == i)
			res.push_back(x);
	}
	cout << res.size() << endl;
	for(int i = 0; i < res.size(); ++i) {
		cout << res[i] << " ";
	}
	cout << endl;

	return 0;
}
