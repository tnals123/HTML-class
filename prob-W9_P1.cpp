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
	//void sort() {
	//	cout << v.sort(v.begin(), v.end()) << endl;
	//}
	int min() {
		return *(v.begin());
	}
	void removeMin() {
		if (empty()) {
			return;
		}
		else {
			v.erase(v.begin());
		}
	}
};

int main() {
	int testCase{}, n{}, c{};
	cin >> testCase;
	for (int i{ 0 }; i < testCase; i++) {
		PQ q;
		cin >> n;
		for (int j{ 0 }; j < n; j++) {
			cin >> c;
			q.insert(c);
		}
		//q.sort()
	}
}