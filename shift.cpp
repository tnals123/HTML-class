// 문제 : 배열 shift
#include <iostream>
using namespace std;
class Arr {
public:
	Arr(int size) :size(size) {
		arr1 = new int[size];
		for (int i = 0; i < size; i++) {
			int n;
			cin >> n;
			arr1[i] = n;
			arr2 = arr1; // 배열 복사
		}
	}
	void shift(int n) {
		if (n > size) { n = n % size; }
		for (int i = n; i < size; i++) {
			arr2[i] = arr1[i - n];
		}
		for (int i = 0; i < n; i++) {
			arr2[i] = arr1[size - n + i];
		}
		/* shift 연산을 n번하는 민정이 코드도 효율적임
			for (int i = 0; i < n; i++) {
			int tmp = arr1[0];
			for (int j = 0; j < size; j++) {
				arr1[j - 1] = arr1[j];
			}
			arr1[size - 1] = tmp;
		}*/
		for (int i = 0; i < size; i++) {
			cout << arr2[i] << " ";
		}
		cout << endl;
	}
	int* arr1;
	int* arr2;
	int size = 0;
};
int main() {
	int test = 0, size = 0, shift = 0;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> size >> shift;
		Arr arr_(size);
		arr_.shift(shift);
	}
}