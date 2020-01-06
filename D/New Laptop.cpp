/*
Nếu 1 dòng laptop có cả 3 tính chất: speed, ram & hdd  
đều kém hơn 3 tính chất trên của 1 dòng laptop khác 
thì nó được coi là dòng laptop đã lỗi thời.
Trong số các máy tính không lỗi thời (speed, ram & hdd 
đều bằng nhau) thì chọn chiếc rẻ nhất.
*/

#include <iostream>
#include <vector>

using namespace std;

struct laptop
{
	int id;
	int speed;
	int ram;
	int hdd;
	int price;
	int old = 0;
};

int older(laptop a, laptop b) {
	if(a.speed < b.speed && a.ram < b.ram && a.hdd < b.hdd)
		return 1;
	else if(a.speed > b.speed && a.ram > b.ram && a.hdd > b.hdd)
		return 2;
	return 0;
}

int main() {
	int n;
	cin >> n;
	vector<laptop> a;
	for(int i = 0; i < n; ++i) {
		laptop tmp;
		tmp.id = i + 1;
		cin >> tmp.speed >> tmp.ram >> tmp.hdd >> tmp.price;
		a.push_back(tmp);
	}

	for(int i = 0; i < a.size() - 1; ++i) {
		for(int j = i + 1; j < a.size(); ++j) {
			if(older(a[i], a[j]) == 1) {
				a[i].old = 1;
			}
			else if(older(a[i], a[j]) == 2) {
				a[j].old = 1;
			}
		}
	}

	for(int i = 0; i < a.size(); ++i) {
		if(a[i].old == 1) {
			a.erase(a.begin() + i);
			i--;
		}
	}

	laptop buy = a[0];
	for(int i = 1; i < a.size(); ++i) {
		if(buy.price > a[i].price)
			buy = a[i];
	}

	cout << buy.id << endl;

	return 0;
}
