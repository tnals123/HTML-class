#include <iostream>
using namespace std;

class Queue_Game {
private:
	int* arr;
	int* arr2;
	int lateIndex_P1;
	int lateIndex_P2;
	int capacity;
	int n;
public:
	Queue_Game(int capacity) {
		this->capacity = capacity;
		arr = new int[capacity];
		arr2 = new int[capacity];
		lateIndex_P1 = 0;
		lateIndex_P2 = 0;
		n = 0;
	}

	void insert_P1_queue() {
		int health;
		for (int i = 0; i < capacity; i++) {
			cin >> health;
			arr[lateIndex_P1] = health;
			lateIndex_P1++;
		}
	}

	void insert_P2_queue() {
		int health;
		for (int i = 0; i < capacity; i++) {
			cin >> health;
			arr2[lateIndex_P2] = health;
			lateIndex_P2++;
		}
	}

	void fight() {
		int p1 = 0;
		int p2 = 0;

		for (int i = 0; i < capacity; i++) {
			if (arr[i] > arr2[i]) {

				if (i == capacity - 1) {
					p1++;
					//cout << "Round" << i + 1 << " " << p1 << ":" << p2 << "\n";
					cout << "Round" << i + 1 << " " << "p1" << " " << arr[i] - arr2[i] << "\n";
				}
				else {
					p1++;
					arr2[i + 1] = arr2[i + 1] + arr[i] - arr2[i];
					//cout << "Round" << i + 1 << " " << p1 << ":" << p2 << "\n";
					cout << "Round" << i + 1 << " " << "p1" << " " << arr[i] - arr2[i] << "\n";
				}
			}
			else if (arr[i] < arr2[i]) {
				if (i == capacity - 1) {
					p2++;
					//cout << "Round" << i + 1 << " " << p1 << ":" << p2 << "\n";
					cout << "Round" << i + 1 << " " << "p2" << " " << arr2[i] - arr[i] << "\n";
				}
				else {
					p2++;
					arr[i + 1] = arr[i + 1] + arr2[i] - arr[i];
					//cout << "Round" << i + 1 << " " << p1 << ":" << p2 << "\n";
					cout << "Round" << i + 1 << " " << "p2" << " " << arr2[i] - arr[i] << "\n";
				}
			}
			else if (arr[i] == arr2[i]) {
				//cout << "Round" << i + 1 << " " << p1 << ":" << p2 << "\n";
				cout << "Round" << i + 1 << " " << "p1" << " " << arr[i] - arr2[i] << "\n";
			}
		}
		if (p1 > p2) {
			cout << "Winner p1\n";
		}
		else if (p1 < p2) {
			cout << "Winner p2\n";
		}
		else if (p1 == p2) {
			cout << "Draw\n";
		}
	}


};

int main() {
	int Game;
	int Size;
	cin >> Game;
	for (int i = 0; i < Game; i++) {
		cin >> Size;
		Queue_Game* game = new Queue_Game(Size);
		game->insert_P1_queue();
		game->insert_P2_queue();
		game->fight();
	}

}