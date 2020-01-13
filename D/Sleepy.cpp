#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int toInt(string s) {
	int res = 0;
	for(int i = 0 ; i < s.size(); ++i)
		res = res * 10 + (s[i] - '0');
	return res;
}

int main() {
	int a1, a2, a3, b1, b2, b3;
	string s;
	
	cin >> s;
	a1 = toInt(s.substr(0, s.find(":")));
	b1 = toInt(s.substr(s.find(":") + 1, s.size()));

	cin >> s;
	a2 = toInt(s.substr(0, s.find(":")));
	b2 = toInt(s.substr(s.find(":") + 1, s.size()));

	a3 = (a1 + 24) - a2;
	b3 = (b1 + 60) - b2;
	
	if(b2 > b1) a3 -= 1;
	if(a3 >= 24) a3 -= 24;
	if(b3 >= 60) b3 -= 60;

	cout << (a3 < 10 ? "0" : "") << a3 << ":" << (b3 < 10 ? "0" : "") << b3 << endl;

	return 0;
}
