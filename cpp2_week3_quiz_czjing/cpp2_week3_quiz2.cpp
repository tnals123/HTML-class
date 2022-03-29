// cpp2_week3_quiz2
// coding: czjing
// data: 2021.09.22

#include <iostream>
#include <iomanip>  // setw

using namespace std;


class StudentNode
{
public:
	StudentNode(const char*, int, StudentNode*);
	StudentNode(const char*, int);

	void setNext(StudentNode* next) { this->next = next; };
	StudentNode* getNext() { return next; };
	const char* getName() { return name; };
	int getID() { return id; };

	void addToHead(StudentNode* head) { head->setNext(this); };
	void addToTail(StudentNode* tail) { this->setNext(tail); };
	void printAll();

private:
	const char* name;
	int id;
	StudentNode* next;
};

StudentNode::StudentNode(const char* name, int id) {
	this->name = name;
	this->id = id;
	this->next = NULL;
}

StudentNode::StudentNode(const char* name, int id, StudentNode* next) {
	this->name = name;
	this->id = id;
	this->next = next;
}

void StudentNode::printAll() {
	cout << ">>> Name: " << setw(4) << getName() << setw(6) << " ID: " << getID() << endl;
	cout << ">>> Name: " << setw(4) << getNext()->getName() << setw(6) << " ID: " << getNext()->getID() << endl;
	cout << ">>> Name: " << setw(4) << getNext()->getNext()->getName() << setw(6) << " ID: " << getNext()->getNext()->getID() << endl;
}


int main(void)
{
	const char* name[3] = { "kim", "lee", "park", };

	StudentNode studentA(name[0], 001);
	StudentNode studentB(name[1], 002);
	StudentNode studentC(name[2], 003);

	// case_1: A->B->C
	studentA.addToTail(&studentB);
	studentB.addToTail(&studentC);
	studentA.printAll();


	cout << endl;

	// case_2: C->A->B
	studentA.addToTail(&studentB);
	studentA.addToHead(&studentC);
	studentC.printAll();

	return 0;
}

