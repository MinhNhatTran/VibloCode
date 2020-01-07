#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int n, m, p, x = 0, y = 0;
	n = a / 2;
	m = b / 24;
	p = (n < m ? n : m);
	p = (p % 2 == 1 ? p - 1 : p);

	a -= p * 2;
	b -= p * 24;

	int i = 0;
	while(true) {
		if(i % 2 == 0) {
			if(a >= 2 && b >= 2) {
				a -= 2;
				b -= 2;
			}
			else if(a >= 1 && b >= 12) {
				a -= 1;
				b -= 12;
			}
			else if(b >= 22) {
				b -= 22;
			}
			else {
				cout << "Dung" << endl;
				return 0;
			}
            x++;
		}
		else {
			if(b >= 22) {
				b -= 22;
			}
			else if(a >= 1 && b >= 12) {
				a -= 1;
				b -= 12;
			}
			else if(a >= 2 && b >= 2) {
				a -= 2;
				b -= 2;
			}
			else {
				cout << "An" << endl;
				return 0;
			}
            y++;
		}
		i++;
	}

	return 0;
}
