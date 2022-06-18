#include<iostream>
#include<vector>
using namespace std;

class Comparsion {
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
	int max() {
		Comparsion c;
		int m{*(v.begin())};
		for (vector<int>::iterator p{ v.begin() }; p != v.end(); ++p) {
			if (c(m,*p)) {
				m = *p;
			}
		}
		return m;
	}
	void removeMax() {
		if (empty()) {
			return;
		}
		else {
			Comparsion c;
			vector<int>::iterator mP{v.begin()};
			int m{ *mP };
			for (vector<int>::iterator p{ v.begin() }; p != v.end(); ++p) {
				if (c(m,*p)) {
					m = *p;
					mP = p;
				}
			}
			v.erase(mP);
		}
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
			cout << p.max() << ' ';
			p.removeMax();
		}
		cout << '\n';
	}
}