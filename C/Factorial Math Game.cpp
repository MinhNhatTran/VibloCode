#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n];
    vector<int> res;

	for(int i = 0; i < n; ++i)
		cin >> a[i];

	for(int i = 0; i < n; ++i) {
		int tmp = a[i] - '0';
        if(tmp == 2 || tmp == 3 || tmp == 5 || tmp == 7) {
            res.push_back(tmp);
        }
        else if(tmp == 4) {
            res.push_back(3);
            res.push_back(2);
            res.push_back(2);
        }
        else if(tmp == 6) {
            res.push_back(5);
            res.push_back(3);
        }
        else if(tmp == 8) {
            res.push_back(7);
            res.push_back(2);
            res.push_back(2);
            res.push_back(2);
        }
        else if(tmp == 9) {
            res.push_back(7);
            res.push_back(3);
            res.push_back(3);
            res.push_back(2);
        }
	}
	sort(res.begin(), res.end(), greater<int>());
	for(int i = 0 ; i < res.size(); ++i)
		cout << res[i];
	cout << endl;

	return 0;
}
