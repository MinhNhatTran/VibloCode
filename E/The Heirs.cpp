#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float a, b, c;
	cin >> a >> b >> c;

	if(a < b) {
		cout << "0" << endl;
	}
	float wait = (a - b) * c / b;
	cout << ceil(wait) << endl;

	return 0;
}
