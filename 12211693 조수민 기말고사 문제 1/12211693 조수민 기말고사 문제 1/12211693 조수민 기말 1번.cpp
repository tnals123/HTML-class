//1. �ϳ��� �ܾ �Է¹޴� ũ�Ⱑ 10�� ������ �����ϰ� pop()�� �̿��Ͽ� �Ųٷ� ����϶�.
//
//1.1 Ex.�ܾ� ��object���� �Է��ϸ� ��tcejbo���� ���
//
//1.2 push(), pop() ����
//
//1.3.1 Stack full�� empty�� ���� exception�̳� throw�� ����� ����ó�� ����
//
//1.3.2 �Էµ� �ܾ� �� ���ĺ��� �ƴ� ���� �ԷµǾ����� ����ó�� "���ĺ��� �ƴ� ���� �ԷµǾ����ϴ�."
//
//1.3.3 �Էµ� �ܾ��� ����� 10 �̻��� ��� ����ó�� "���̰� 10 �̻��� �ܾ �ԷµǾ����ϴ�."
#include <iostream>
using namespace std;

class Stack {
private:
	int top, max;
	char* stack;
public:
	Stack(int size) {
		max = size;
		stack = new char[size];
		top -= 1;
	}
	bool stackFull() {
		if (top == max - 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool stackEmpty() {
		if (top ==-1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	void push(char stackelement) {
		int size = sizeof(stackelement);
		if (size > 10) {
			cout << "���̰� 10 �̻��� �ܾ �ԷµǾ����ϴ�.";
		}
		if (stackFull() == 1) {
			cout << "������ ���� á���ϴ�";
		}
		else {
			stack[++top] = stackelement;
		}
	}
	void pop() {
		if (stackEmpty() == 1) {
			cout << "������ ������ϴ�.";
		}
		else {
			stack[top--];
		}
	}
	
};