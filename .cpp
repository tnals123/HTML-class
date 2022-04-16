#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

class SingleLinked_List {
private:
	node* head;
	node* tail;
	int listSize;
public:
	SingleLinked_List() {
		head = NULL;
		tail = NULL;
		listSize = 0;
	}

	void print() {
		if (listSize == 0) {
			cout << "empty\n";
		}
		node* curNode = head;
		while (curNode != NULL) {
			cout << curNode->data << " ";
			curNode = curNode->next;
		}
		cout << "\n";
	}

	void append(int data) {
		node* newNode = new node;
		newNode->data = data;
		newNode->next = NULL;
		if (listSize == 0) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		listSize++;
		print();
	}
	void insert(int index, int data) {

		if (listSize == 0) {
			append(data);
		}
		else if (index <0 || index >listSize) {
			return;
		}
		else if (index == 0) {
			node* curNode = new node;
			curNode->data = data;
			curNode->next = head;
			head = curNode;
			listSize++;
		}
		else {
			node* newNode = new node;
			newNode->data = data;
			node* curNode = head;
			for (int i = 1; i < index; i++) {
				curNode = curNode->next;
			}
			newNode->next = curNode->next;
			curNode->next = newNode;
			listSize++;
		}

	}

	void Delete(int index) {
		node* curNode = head;
		if (listSize == 0) {
			cout << -1 << endl;
			return;
		}

		else if (index <0 || index > listSize) {
			cout << -1 << endl;
			return;
		}

		else if (index == 0) {
			if (listSize == 1) {
				head = NULL;
				tail = NULL;
				listSize--;
			}
			else {
				head = head->next;
			}
		}

		else {
			node* preNode = head;
		
			for (int i = 0; i < index; i++) {
				preNode = curNode;
				curNode = curNode->next;
			}
			preNode->next = curNode->next;
			if (curNode == tail) {
				tail = preNode;
			}
		}
		delete curNode;
		listSize--;
	}

	void Min() {
		if (listSize == 0) {
			cout << "empty" << endl;
		}
		else {
			int min;
			node* curNode = head;
			min = curNode->data;
			for (int i = 0; i < listSize; i++) {
				curNode = curNode->next;
				if (curNode == NULL) {
					break;
				}
				if (curNode->data < min) {
					min = curNode->data;
				}
			}
			cout << min << endl;
		}
	}
};


int main() {
	SingleLinked_List* myarray = new SingleLinked_List();
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		string mess;
		int index, data;
		cin >> mess;
		if (mess == "Append") {
			cin >> data;
			myarray->append(data);
		}
		else if (mess == "Print") {
			myarray->print();
		}
		else if (mess == "Delete") {
			cin >> data;
			myarray->Delete(data);
		}
		else if (mess == "Insert") {
			cin >> index >> data;
			myarray->insert(index,data);
		}
		else if (mess == "Min") {
			myarray->Min();
		}
	}
}