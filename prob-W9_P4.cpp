#include<iostream>
#include<vector>
using namespace std;

class Comparison {
public:
	bool operator()(int a, int b) {
		if (a < b) {
			return true;
		}
		else {
			return false;
		}
	}
};

class PQ {
private:
	vector<int>v;
public:
	int size() {
		return v.size();
	}
	bool empty() {
		return size() == 0;
	}
	void insert(int e) {
		v.push_back(e);
	}
	int min() {
		Comparison c;
		vector<int>::iterator mP{ v.begin() };
		for (vector<int>::iterator p{ v.begin() }; p != v.end(); ++p) {
			if (*p % 2 == 0) {
				if (*mP % 2 != 0) {
					mP = p;
				}
				else {
					if (c(*p, *mP)) {
						mP = p;
					}
				}
			}
			else {
				if (*mP % 2 != 0) {
					if (c(*p, *mP)) {
						mP = p;
					}
				}
			}
		}
		int temp{ *mP };
		v.erase(mP);
		return temp;
	}
};

int main() {
	int testCase{}, n{}, c{};
	cin >> testCase;
	for (int i{ 0 }; i < testCase; i++) {
		PQ p;
		cin >> n;
		for (int j{ 0 }; j < n; j++) {
			cin >> c;
			p.insert(c);
		}
		for (int j{ 0 }; j < n; j++) {
			cout << p.min() << ' ';
		}
		cout << '\n';
	}

}