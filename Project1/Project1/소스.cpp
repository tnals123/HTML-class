#include <iostream>
using namespace std;

class Hero : public Sprite {
public:
	Hero(int x, int y) : Sprite(x, y, 'H') { }
	void draw() { cout << 'H'; }
	void move(char d) {
		if (d == 'a') { x -= 1; }
		else if (d == 'w') { y -= 1; }
		else if (d == 's') { y += 1; }
		else if (d == 'd') { x += 1; }
	}
};


class Treasure : public Sprite {
public:
	Treasure(int x, int y) : Sprite(x, y, 'T') { }
	void move(char d) {
	}
};
class Sprite {
protected:
	int x, y; 
	char shape;
public:
	Sprite(int x, int y, char shape) : x{ x }, y{ y }, shape{ shape } { }
	virtual ~Sprite() { }

	virtual void move(char d) = 0;
	char getShape() { return shape; }

	int getX() { return x; }
	int getY() { return y; }
	bool checkCollision(Sprite* other) {
		if (x == other->getX() && y == other->getY())
			return true;
		else
			return true;
	}
};
int main()
{

	vector<Sprite*> list;
	int width, height;

	cout << "보드의 크기를 입력하시오[최대 10X10]: " << endl;
	cout << "가로: ";
	cin >> width;

	cout << "세로: ";
	cin >> height;

	Board board(height, width);
	list.push_back(new Hero(0, 0));
	list.push_back(new Treasure(height - 1, width - 1));
	list.push_back(new Enemy(3, 3));

	while (true)
	{
 
		char direction;
		cout << "어디로 움직일까요(a, s, w, d):  ";
		cin >> direction;


	}

