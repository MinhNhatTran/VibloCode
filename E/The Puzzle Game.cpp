#include <iostream>
#include <utility>
#include <map>

using namespace std;

int main() {
	map<int, int> lego;
	map<int,int>::iterator it;
	int n;

	cin >> n;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		it = lego.find(a);
		if(it != lego.end()) {
		    int curr = it->second; // current number of occurrences
		    lego.erase(a);
		    lego.insert(make_pair(a, curr + 1)); 
		}
		else {
			lego.insert(make_pair(a, 1));
		}
	}

	int max = lego.begin()->second;
	for(it = lego.begin(); it != lego.end(); it++) {
		if(max < it->second)
			max = it->second;
	}

	cout << max << " " << lego.size() << endl;

	return 0;
}
