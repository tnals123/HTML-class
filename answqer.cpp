/*
20191111
Data Structure Min-Heap Inplementation
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Heap {
public:
	vector<int>heap;
	int n;

	Heap() {
		heap.push_back(-1);
		n = 0;
	}

	void swapHeap(int* a, int* b) {
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}

	void insert(int value) {
		heap.push_back(value);
		n++;
		int child = n;
		int parent = child / 2;

		while (child > 1 && heap[child] < heap[parent]) {
			swapHeap(&heap[child], &heap[parent]);
			child = parent;
			parent = child / 2;
		}
	}

	int size() {
		return n;
	}

	int pop() {
		if (n < 1) {
			return -1;
		}

		else {
			int res = heap[1];
			swapHeap(&heap[1], &heap[n--]);
			heap.pop_back();
			int parent = 1;
			int child = parent * 2;

			if (child + 1 <= n)
				child = (heap[child + 1] >= heap[child] ? child : child + 1);

			while (child <= n && heap[child] < heap[parent]) {
				swapHeap(&heap[child], &heap[parent]);
				parent = child;
				child = parent * 2;

				if (child + 1 <= n)
					child = (heap[child + 1] >= heap[child] ? child : child + 1);
			}

			return res;
		}
	}

	int top() {
		if (n < 1)
			return -1;
		else
			return heap[1];
	}

	int isEmpty() {
		if (n < 1)
			return 1;
		else
			return 0;
	}

	void print() {
		if (n >= 1) {
			for (int i = 1; i <= n; i++)
				cout << heap[i] << " ";
			cout << "\n";
		}
		else
			cout << "-1\n";
	}
};

int main() {
	int N, input;
	string cmds;
	Heap hp;

	cin >> N;

	while (N--) {
		cin >> cmds;
		if (cmds == "insert") {
			cin >> input;
			hp.insert(input);
		}
		else if (cmds == "size")
			cout << hp.size() << "\n";
		else if (cmds == "isEmpty")
			cout << hp.isEmpty() << "\n";
		else if (cmds == "pop")
			cout << hp.pop() << "\n";
		else if (cmds == "top")
			cout << hp.top() << "\n";
		else
			hp.print();
	}
}