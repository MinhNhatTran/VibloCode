#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	int step = 0;
	while(s != "1") {
		if(s[s.size() - 1] == '0') {
			s.erase(s.size() - 1, s.size());
		}
		else {
			int i = s.size() - 1;
			while(s[i] == '1') {
				if(i < 0) break;
				s[i] = '0';
				i--;
			}
			if(i == -1) {
				s = "1" + s;
			}
			else {
				s[i] = '1';
			}
		}
		step++;
	}
	cout << step << endl;

	return 0;
}
