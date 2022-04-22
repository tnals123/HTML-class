//#include <iostream>
//using namespace std;
//
//
//class Array {
//private:
//	int* arr;
//	int arrSize;
//public:
//	Array(int size) {
//		this->arrSize = size;
//		this->arr = new int[arrSize];
//
//		for (int i = 0; i < arrSize; i++) {
//			arr[i] = 0;
//		}
//	}
//
//	void add(int id, int data) {
//		for (int i = arrSize - 2; i >= id; i--) {
//			arr[i + 1] = arr[i];
//		}
//		arr[id] = data;
//	}
//
//	void remove(int id) {
//		for (int i = id + 1; i < arrSize; i++) {
//			arr[i - 1] = arr[i];
//		}
//		arr[arrSize - 1] = 0;
//	}
//
//	void set(int id, int data) {
//		arr[id] = data;
//	}
//
//	void find(int data) {
//		int min = -1;
//		int count = 0;
//		for (int i = 0; i < arrSize; i++) {
//			if (arr[i] == data) {
//				min = arr[i];
//				count += 1;
//			}
//		}
//		if (count >= 2) {
//			for (int i = 0; i < arrSize; i++) {
//				if (arr[i] == data) {
//					min = i;
//					break;
//				}
//			}
//		}
//		cout << min << "\n";
//	}
//
//	void print() {
//		for (int i = 0; i < arrSize; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << "\n";
//	}
//
//};
//
//
//int main() {
//	int T, N;
//	cin >> T >> N;
//	Array* myarr = new Array(N);
//	for (int i = 0; i < T; i++) {
//		string mess;
//		int index, data;
//		cin >> mess;
//
//		if (mess == "add") {
//			cin >> index >> data;
//			myarr->add(index, data);
//		}
//		else if (mess == "print") {
//			myarr->print();
//		}
//		else if (mess == "find") {
//			cin >> data;
//			myarr->find(data);
//		}
//		else if (mess == "set") {
//			cin >> index >> data;
//			myarr->set(index, data);
//		}
//		else if (mess == "remove") {
//			cin >> index;
//			myarr->remove(index);
//		}
//
//	}
//
//}