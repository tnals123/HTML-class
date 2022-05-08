#include <iostream>
#include <string>
using namespace std;

struct node {
    node* next;
    node* prev;
    int data;
};
class linkedList {
private:
    int n;
    node* head;
    node* tail;
public:
    linkedList() {
        n = 0;
        head = tail = NULL;
    }
    bool empty() {
        return (n == 0);
    }
    int size() {
        return n;
    }
    void Print() {
        if (empty()) {
            cout << "empty" << endl;
            return;
        }
        else {
            node* curNode = head;
            for (int i = 0; i < size(); i++) {
                cout << curNode->data << " ";
                curNode = curNode->next;
            }
            cout << endl;
        }
    }
    void Print_reverse() {
        if (empty()) {
            cout << "empty" << endl;
            return;
        }
        else {
            node* curNode = tail;
            for (int i = 0; i < size(); i++) {
                cout << curNode->data << " ";
                curNode = curNode->prev;
            }
            cout << endl;
        }
    }
    void Append(int data) {
        node* newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        if (empty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        n++;
        Print();
    }
    void Delete(int i) {
        if (i < 0 || empty() || i >= n) {
            cout << -1 << endl;
            return;
        }
        node* curNode = head;
        if (i == 0) {
            if (n == 1) {
                head = tail = NULL;
            }
            else {
                head = curNode->next;
                curNode->next->prev = NULL;
            }
        }
        else {
            node* preNode = head;
            for (int a = 0; a < i; a++) {
                preNode = curNode;
                curNode = curNode->next;
            }
            preNode->next = curNode->next;
            if (tail == curNode) {
                tail = preNode;
            }
            else {
                curNode->next->prev = preNode;
            }
        }
        cout << curNode->data << endl;
        delete curNode;
        n--;
    }
    void Max() {
        if (empty()) {
            cout << "empty" << endl;
            return;
        }
        node* curNode = head;
        int max = curNode->data;
        while (curNode != NULL) {
            if (max < curNode->data) {
                max = curNode->data;
            }
            curNode = curNode->next;
        }
        cout << max << endl;
    }
    void Update(int x, int y) {
        if (empty()) {
            cout << "empty" << endl;
            return;
        }
        node* curNode = head;
        int value = x;
        int count = 0;
        while (curNode != NULL) {
            if (value == curNode->data) {
                curNode->data = y;
                count++;
            }
            curNode = curNode->next;
        }
        if (count == 0) {
            cout << "Not found" << endl;
        }
        else {
            Print();
        }
    }
};

int main() {
    linkedList ll;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Append") {
            int a;
            cin >> a;
            ll.Append(a);
        }
        else if (s == "Delete") {
            int a;
            cin >> a;
            ll.Delete(a);
        }
        else if (s == "Max") {
            ll.Max();
        }
        else if (s == "Print") {
            ll.Print();
        }
        else if (s == "Print_reverse") {
            ll.Print_reverse();
        }
        else if (s == "Update") {
            int x, y;
            cin >> x >> y;
            ll.Update(x, y);
        }
    }

    return 0;
}