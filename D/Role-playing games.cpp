#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main() {
	int s, n;
	cin >> s >> n;
	vector<pair<int, int> > m;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		m.push_back(make_pair(a, b));
	}

	sort(m.begin(), m.end(), compare);
	for(int i = 0; i < n; ++i) {
		int a = 0;
		if(m[a].first >= s) {
			cout << "NO" << endl;
			return 0;
		}
		for(int j = 0; j < m.size(); ++j) {
			if(m[j].first <= s) {
				if(m[j].second > m[a].second) {
					a = j;
                    break;
				}
			}
		}
		s += m[a].second;
		m.erase(m.begin() + a);
	}
	cout << "YES" << endl;

	return 0;
}
