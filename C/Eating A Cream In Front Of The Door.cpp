#include <iostream>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

int main() {
	map<int, int> money;
	map<int, int>::iterator it;
	int n;

	money.insert(make_pair(25, 0));
	money.insert(make_pair(50, 0));
	money.insert(make_pair(100, 0));
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		// them to tien khach dua
		it = money.find(a);
		int curr = it->second;
		money.erase(a);
		money.insert(make_pair(a, curr + 1));

		// tra tien cho khach
		if(a == 100) {
			if(money[25] >= 1 && money[50] >= 1) {
				it = money.find(50);
				curr = it->second;
				money.erase(50);
				money.insert(make_pair(50, curr - 1));

				it = money.find(25);
				curr = it->second;
				money.erase(25);
				money.insert(make_pair(25, curr - 1));
			}
			else if(money[25] >= 3 && money[50] == 0) {
				it = money.find(25);
				curr = it->second;
				money.erase(25);
				money.insert(make_pair(25, curr - 3));
			}
			else {
				cout << "NO" << endl;
				return 0;
			}
		}
		else if(a == 50) {
			if(money[25] >= 1) {
				it = money.find(25);
				curr = it->second;
				money.erase(25);
				money.insert(make_pair(25, curr - 1));
			}
			else {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;

	return 0;
}
