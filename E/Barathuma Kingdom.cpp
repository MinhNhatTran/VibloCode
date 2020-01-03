#include <iostream>

using namespace std;

int main() {
	int turak = 0, aya = 0;
	int n;
	cin >> n;

	turak = n / 3;
	n -= turak * 3;
	if(n == 2) turak++;
	aya = turak / 12;
	turak -= aya * 12;

	cout << aya << " " << turak << endl;

	return 0;
}
