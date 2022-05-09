//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* par;
//	vector<Node*> chi_v;
//	Node(int data) {
//		this->data = data;
//		par = NULL;
//	}
//};
//class Tree {
//public:
//	Node* root;
//	vector<Node*> all;
//	int ant;
//	Tree(int data) {
//		root = new Node(data);
//		all.push_back(root);
//		ant = 0;
//	}
//	void insertNode(int par, int data) {
//		for (Node* node : all) {
//			if (par == node->data) {
//				Node* newNode = new Node(data);
//				newNode->par = node;
//				node->chi_v.push_back(newNode);
//				all.push_back(newNode);
//				return;
//			}
//		}
//		cout << -1 << endl;//부모노드 못찾음
//	}
//	void preorder(Node* node) {
//		if (node->chi_v.empty()) {
//			ant++;
//			return;
//		}
//		else {
//			for (Node* child : node->chi_v) {
//				preorder(child);
//			}
//		}
//	}
//	int finding(int data) {
//		for (int i = 0; i < all.size(); i++) {
//			if (all[i]->data == data) {
//				return i;
//			}
//		}
//		return false;
//	}
//	void numberofD(int data) {
//		preorder(all[finding(data)]);
//		cout << ant<<endl;
//		ant = 0;
//	}
//};
//int main() {
//	int N,M;
//	cin >> N>>M;
//	Tree t1(1);
//		for (int k = 0; k < N - 1; k++) {
//			int x, y;
//			cin >> x >> y;
//			t1.insertNode(x, y);
//		}
//		for (int i = 0; i < M; i++) {
//			int x;
//			cin >> x;
//			t1.numberofD(x);
//		}
//
//}