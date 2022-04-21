#include <iostream>
using namespace std;

class Array {
private:
	int* arr;
	int arrSize;
public:
	Array(int sz) {
		this->arrSize = sz;
		this->arr = new int[arrSize];


		for (int i = 0; i < sz; i++) {
			arr[i] = 0;
		}

	}

	int at(int id) {
		return arr[id];
	}

	void add(int id, int data) {
		for (int i = arrSize - 2; i >= id; i--) {
			arr[i + 1] = arr[i];
		}
		arr[id] = data;
	}

	void set(int id, int data) {
		arr[id] = data;
	}

	void print() {
		for (int i = 0; i < arrSize; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void remove(int id) {
		for (int i = id + 1; i < arrSize; i++) {
			arr[i - 1] = arr[i];
		}
		arr[arrSize - 1] = 0;
	}

	void find(int data) {
		int min = -1;
		int count = 0;
		for (int i = 0; i < arrSize; i++) {
			if (arr[i] == data) {
				min = i;
				count += 1;
			}
		}
		if (count >= 2) {
			for (int i = 0; i < arrSize; i++) {
				if (arr[i] == data) {
					min = i;
					break;
				}
			}
		}
		cout << count << endl;
		//cout << min << endl; <- P1
	}
};
int main() {
	int T, N;
	cin >> T >> N;
	Array* myarr = new Array(N);
	for (int i = 0; i < T; i++) {
		string mess;
		int index, data;
		cin >> mess;

		if (mess == "add") {
			cin >> index >> data;
			myarr->add(index, data);
		}
		else if (mess == "print") {
			myarr->print();
		}
		else if (mess == "find") {
			cin >> data;
			myarr->find(data);
		}
		else if (mess == "set") {
			cin >> index >> data;
			myarr->set(index,data);
		}
		else if (mess == "remove") {
			cin >> index;
			myarr->remove(index);
		}

	}

}