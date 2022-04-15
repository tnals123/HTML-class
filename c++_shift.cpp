#include <iostream>
#include <string>
using namespace std;

class Array_Shift {
private:
	int* arr;
	int arrSize;
public:
	Array_Shift(int data) {
		this->arr = new int[data];
		arrSize = data;
	}

	void shift(int value) {
		for (int i = arrSize; i >= 0; i--) {
			int temp;
			arr[i + value] = temp;
			arr[i + value] = arr[i];
			if (i + value > arrSize) {

			}
		}
	}

	void print() {
		for (int i = 0; i < arrSize; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	void mycin() {
		for (int i = 0; i < arrSize; i++) {
			cin >> arr[i];
		}
	}
};


int main() {
	int T;
	int N;
	cin >> T >> N;
	Array_Shift* myarray = new Array_Shift(N);
	myarray->mycin();
	myarray->print();

}