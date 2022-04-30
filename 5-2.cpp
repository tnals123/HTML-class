//#include <iostream>
//using namespace std;
//class Node {
//	int value;
//	Node* next;
//	Node* prev;
//	friend class D_LinkedList;
//};
//
//class D_LinkedList {
//private:
//	Node* header;
//	Node* trailer;
//	int n;
//public:
//	D_LinkedList() {
//		Node* newNode1 = new Node;
//		Node* newNode2 = new Node;
//		header = newNode1;
//		trailer = newNode2;
//		header->next = trailer;
//		header->prev = nullptr;
//		trailer->next = nullptr;
//		trailer->prev = header;
//		n = 0;
//	}
//	bool Empty() {
//		return(header->next == trailer);
//	};
//	
//	void insert(int p, int z) {
//		Node* itr = header;
//		Node* newNode = new Node;
//		newNode->value = z;
//		for (int i = 0; i < p; i++) {
//			itr = itr->next;
//		}
//		newNode->prev = itr;
//		newNode->next = itr->next;
//		itr->next = newNode;
//		newNode->next->prev = newNode;
//		n++;
//	}
//	
//	int rePrev(int k) {
//		Node* cur = header->next;
//		for (int i = 0; i < k; i++) {
//			cur = cur->next;
//		}
//		if (cur->prev == header) {
//			return (cur->value) + (cur->next->value);
//		}
//		else if (cur->next == trailer) {
//			return (cur->value) + (cur->prev->value);
//		}
//		return (cur->value) + (cur->next->value) + (cur->prev->value);
//	}
//	
//	void print(int k) {
//		
//		Node* cur = header->next;
//		for (int i = 0; i < k; i++) {
//			cout << cur->value<<" ";
//			cur = cur->next;
//		}
//		cout << endl;
//	}
//};
//int main() {
//	int T;
//	cin >> T;
//	string str;
//
//	for (int i = 0; i < T; i++) {
//		int N;
//		cin >> N;
//		D_LinkedList d1;
//		for (int j = 0; j < N; j++) {
//			int num;
//			cin >> num;
//			d1.insert(j, num);
//		}
//		for (int j = 0; j < N; j++) {
//			
//			cout << d1.rePrev(j) << " ";
//		}
//		cout << endl;
//	}
//}
