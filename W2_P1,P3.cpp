#include <iostream>
#include <string>
using namespace std;

struct node {
    int data;
    node* next;
};
class singleLinkedList {
private:
    node* head;
    node* tail;
    int listSize;

public:
    singleLinkedList() {
        head = NULL;
        tail = NULL;
        listSize = 0;
    }
    bool empty() {
        if (listSize == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    void min() {
        if (empty()) {
            cout << "empty" << endl;
        }
        else {
            node* curNode = head;
            int min = curNode->data;
            while (curNode != NULL) {
                if (min > curNode->data) {
                    min = curNode->data;
                }
                curNode = curNode->next;
            }
            cout << min << endl;
        }
    }
    void sum() {
        if (empty()) {
            cout << 0 << endl;
        }
        node* curNode = head;
        int sum = 0;
        while (curNode != NULL) {
            sum = sum + curNode->data;
            curNode = curNode->next;
        }
        cout << sum << endl;
    }
    void FAppend(int data) {
        node* newNode = new node;
        if (empty()) {
            tail = newNode;
        }
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        listSize++;
    }
    void Bappend(int data) {
        node* newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        if (empty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        listSize++;
        print();
    }
    void Fremove() {
        if (empty()) {
            return;
        }
        node* curNode = head;
        head = curNode->next;
        delete curNode;
        if (empty()) {
            tail = NULL;
        }
    }
    void Bremove() {
        if (empty()) {
            return;
        }
        node* curNode = head;
        if (curNode == tail) {
            head = tail = NULL;
            delete curNode;
        }
        else {
            while (curNode->next != tail) {
                curNode = curNode->next;
            }
            tail = curNode;
            delete tail->next;
            tail->next = NULL;
        }
    }
    void insertion(int idx, int data) {
        if (idx < 0) {
            return;
        }
        else if (idx == listSize) {
            Bappend(data);
        }
        else if (idx > listSize) {
            cout << "Index Error" << endl;
        }
        else if (idx == 0) {
            node* newNode = new node;
            newNode->data = data;
            newNode->next = head;
            head = newNode;
            listSize++;
            print();
        }
        else {
            node* newNode = new node;
            newNode->data = data;
            node* curNode = head;
            for (int i = 1; i < idx; i++) {
                curNode = curNode->next;
            }
            newNode->next = curNode->next;
            curNode->next = newNode;
            listSize++;
            print();
        }
    }
    void deletion(int idx) {
        if (empty() || idx < 0 || idx >= listSize) {
            cout << -1 << endl;
            return;
        }
        node* curNode = head;
        if (idx == 0) {
            if (listSize == 1) {
                head = tail = NULL;
            }
            else {
                head = head->next;
            }
        }
        else {
            node* preNode = head;
            for (int i = 0; i < idx; i++) {
                preNode = curNode;
                curNode = curNode->next;
            }
            preNode->next = curNode->next;
            if (curNode == tail) {
                tail = preNode;
            }
        }
        cout << curNode->data << endl;
        delete curNode;
        listSize--;
    }
    void print() {
        if (empty()) {
            cout << "empty";
        }
        node* curNode = head;
        while (curNode != NULL) {
            cout << curNode->data << " ";
            curNode = curNode->next;
        }
        cout << endl;
    }
};



int main() {
    singleLinkedList sl;
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        if (s == "Append") {
            int x;
            cin >> x;
            sl.Bappend(x);
        }
        else if (s == "Print") {
            sl.print();
        }
        else if (s == "Delete") {
            int x;
            cin >> x;
            sl.deletion(x);

        }
        else if (s == "Insert") {
            int i, x;
            cin >> i >> x;
            sl.insertion(i, x);
        }
        else if (s == "Min") {
            sl.min();
        }
        else if (s == "Sum") {
            sl.sum();
        }
    }
    return 0;
}