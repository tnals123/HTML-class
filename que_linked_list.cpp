#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

class Que_Linked_List {
private:
	node* head;
	node* tail;
	int listSize;
public:
	Que_Linked_List() {
		head = NULL;
		tail = NULL;
		listSize = 0;
	}

	void append(int data) {
		node* newNode = new node;
		newNode->data = data;
		if (listSize == 0) {
			head = tail = newNode;
		}
		listSize++;
	}
	
	void size() {
		cout << listSize << "\n";
	}

	void isEmpty() {
		if (listSize == 0) {
			cout << "True\n";
		}
		else {
			cout << "False\n";
		}
	}

	void front() {
		if (listSize == 0) {
			cout << "Empty\n";
		}
		cout << head->data << "\n";
	}

	void rear() {
		if (listSize == 0) {
			cout << "Empty\n";
		}
		cout << tail->data << "\n";
	}

	void enqueue(int data) {
		if (listSize == 0) {
			append(data);
		}
		else {
			node* newNode = new node;
			newNode->data = data;
			tail->next = newNode;
			tail = newNode;
			listSize++;
		}
	}

	void dequeue() {
		if (listSize == 0) {
			cout << "Empty\n";
		}
		else {
			cout << head->data << "\n";
			head = head->next;
			listSize--;
		}
	}
};

int main() {
	int T;
	Que_Linked_List* myqueue = new Que_Linked_List();
	cin >> T;
	for (int i = 0; i < T; i++) {
		string mess;
		int data;
		cin >> mess;
		if (mess == "size") {
			myqueue->size();
		}
		else if(mess == "isEmpty") {
			myqueue->isEmpty();
		}
		else if (mess == "front") {
			myqueue->front();
		}
		else if (mess == "rear") {
			myqueue->rear();
		}
		else if (mess == "enqueue") {
			cin >> data;
			myqueue->enqueue(data);
		}
		else if (mess == "dequeue") {
			myqueue->dequeue();
		}

	}
}

//size() : 큐 𝑄에 저장되어 있는 정수의 개수를 출력한다.
//- isEmpty() : 큐 𝑄가 비어 있는 경우 “True”을, 그렇지 않다면 “False”를 출력한다.
//- front() : 큐 𝑄의 가장 앞에 저장된 정수를 출력한다.큐 𝑄가 비어 있는 경우 “Empty”를 출력한다.
//- rear() : 큐 𝑄의 가장 뒤에 저장된 정수를 출력한다.큐 𝑄가 비어 있는 경우 “Empty”를 출력한다.
//- enqueue(𝒗𝒂𝒍𝒖𝒆) : 큐 𝑄의 가장 뒤에 𝑣𝑎𝑙𝑢𝑒를 삽입한다. (단, 1 ≤ 𝑣𝑎𝑙𝑢𝑒 ≤ 10, 000)
//- dequeue() : 큐 𝑄에서 가장 앞에 있는 정수를 삭제하고, 그 수를 출력한다.큐 𝑄가 비어 있는 경우
//“Empty”를 출력한다.