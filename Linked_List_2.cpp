//#include <iostream>
//using namespace std;
//
//
//struct node{
//	int data;
//	node* next;
//	node* back;
//};
//
//class Linked_List {
//private:
//	node* head;
//	node* tail;
//	int listSize;
//public:
//	Linked_List() {
//		head = NULL;
//		tail = NULL;
//		listSize = 0;
//	}
//	void Print() {
//		if (listSize == 0) {
//			cout << "empty\n";
//		}
//		else if (listSize == 1) {
//			node* curNode = head;
//			cout << curNode->data << " \n";
//		}
//		else {
//			node* curNode = head;
//			cout << curNode->data << " ";
//			for (int i = 1; i < listSize; i++) {
//				curNode = curNode->next;
//				cout << curNode->data << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	void Print_reverse() {
//		if (listSize == 0) {
//			cout << "empty\n";
//		}
//		else if (listSize == 1) {
//			node* curNode = head;
//			cout << curNode->data << "\n";
//		}
//		else {
//			node* curNode = tail;
//			cout << curNode->data << " ";
//			for (int i = 1; i < listSize; i++) {
//				curNode = curNode->back;
//				cout << curNode->data << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	void Append(int data) {
//		node* newNode = new node;
//		newNode->data = data;
//		if (listSize == 0) {
//			head = tail = newNode;
//		}
//		else {
//			tail->next = newNode;
//			newNode->back = tail;
//			newNode->next = NULL;
//			tail = newNode;
//		}
//		listSize++;
//		Print();
//	}
//
//	void Delete(int index) {
//		if (listSize == 0 || index < 0 || index > listSize) {
//			cout << "-1\n";
//		}
//		else if (index == 0) {
//			if (listSize == 1) {
//				head = tail = NULL;
//				listSize--;
//			}
//			else {
//				node* curNode = head;
//				curNode = curNode->next;
//				head = curNode;
//				listSize--;
//			}
//		}
//		else {
//			node* curNode = head;
//			for (int i = 0; i < index; i++) {
//				curNode = curNode->next;
//			}
//			cout << curNode->data << "\n";
//			curNode->back->next = curNode->next;
//			curNode->next->back = curNode->back;
//			listSize--;
//		}
//		
//	}
//
//	void Update(int data, int change_data) {
//		int same = 0;
//		if (listSize == 0) {
//			cout << "empty\n";
//		}
//		else {
//			node* curNode = head;
//			if (curNode->data == data) {
//				curNode->data = change_data;
//				same++;
//			}
//			for (int i = 1; i < listSize; i++) {
//				curNode = curNode->next;
//				if (curNode->data == data) {
//					curNode->data = change_data;
//					same++;
//				}
//			}
//			if (same == 0) {
//				cout << "Not Found\n";
//			}
//		}
//		Print();
//	}
//};
//
//
//int main() {
//	int M;
//	cin >> M;
//	Linked_List* myarray = new Linked_List;
//	for (int i = 0; i < M; i++) {
//		string mess;
//		int index, data;
//		cin >> mess;
//		if (mess == "Append") {
//			cin >> data;
//			myarray->Append(data);
//		}
//		else if (mess == "Print") {
//			myarray->Print();
//		}
//		else if (mess == "Print_reverse") {
//			myarray->Print_reverse();
//		}
//		else if (mess == "Delete") {
//			cin >> index;
//			myarray->Delete(index);
//		}
//		else if (mess == "Update") {
//			cin >> index >> data;
//			myarray->Update(index, data);
//		}
//	}
//}
//
//
