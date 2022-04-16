#include <iostream>
using namespace std;

class Que {
private:
	int* arr;
	int frontIndex;
	int lateIndex;
	int capacity;
	int n;
public:
	Que(int capacity) {
		this->capacity = capacity;
		arr = new int[capacity];
		n = 0;
		frontIndex = 0;
		lateIndex = 0;
	}
	void size() {
		cout << n << "\n";
	}
	
	void isEmpty() {
		if (n == 0) {
			cout << "True" << "\n";
		}
		else {
			cout << "False" << "\n";
		}
	}

	void front() {
		if (n == 0 ){
			cout << "Empty\n";
		}
		else {
			cout << arr[frontIndex] << "\n";
		}
	}

	void rear() {
		if (n == 0) {
			cout << "Empty\n";
		}
		else {
			cout << arr[lateIndex] << "\n";
			
		}
	}

	void enqueue(int value) {
		if (n == capacity) {
			return;
		}
		else {
			arr[lateIndex] = value;
			lateIndex = (lateIndex + 1);
			n++;
		}
	}

	void dequeue() {
		if (n == 0) {
			cout << "Empty\n";
		}
		else {
			cout << arr[frontIndex] << "\n";
			frontIndex = (frontIndex + 1);
			n--;
		}
	}
};

int main() {
	int T;

}

//-size() : 큐 𝑄에 저장되어 있는 정수의 개수를 출력한다.
//- isEmpty() : 큐 𝑄가 비어 있는 경우 “True”을, 그렇지 않다면 “False”를 출력한다.
//- front() : 큐 𝑄의 가장 앞에 저장된 정수를 출력한다.큐 𝑄가 비어 있는 경우 “Empty”를 출력한다.
//- rear() : 큐 𝑄의 가장 뒤에 저장된 정수를 출력한다.큐 𝑄가 비어 있는 경우 “Empty”를 출력한다.
//- enqueue(𝒗𝒂𝒍𝒖𝒆) : 큐 𝑄의 가장 뒤에 𝑣𝑎𝑙𝑢𝑒를 삽입한다. (단, 1 ≤ 𝑣𝑎𝑙𝑢𝑒 ≤ 10, 000)
//- dequeue() : 큐 𝑄에서 가장 앞에 있는 정수를 삭제하고, 그 수를 출력한다.큐 𝑄가 비어 있는 경우
//“Empty”를 출력한다.