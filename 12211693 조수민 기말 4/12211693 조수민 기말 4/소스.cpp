//4. �־��� �ڵ� question4�� ������� ���� ������ �Ʒ��� ���� �ϼ��մϴ�.
//
//4.1 �־��� Sprite Ŭ������ �߻� Ŭ����(abstract class)�� ����
//
//4.2 ���� ĳ���͸� ǥ���ϱ� ���� ���ΰ� Ŭ����, ���� Ŭ����, ���� Ŭ������ �־��� Sprite Ŭ������ ��ӹ޵��� ����
//
//4.3 �� >> �� �����ڸ� �ѹ��� �����ε� �Ͽ� ���ΰ�, ����, ���� ��ü�� cin���� �Է� ����
//
//Ex.Hero hero; cin >> hero;
//
//4.4 ������ ���ΰ�, ����, ���� ��ü�� �ϳ��� ��ü �迭�� ���� �����Ͽ� ���(������� 3���� ���ΰ� 1, ���� 1, ���� 1���� ����)
//
//4.5 �迭 �ȿ� �ִ� ��� ��ü�� ���� ��ġ�� ���
//
//4.6 �־��� moveAll()�� �迭 �ȿ� �ִ� ��� ��ü�� �ѹ��� �����̴� �Լ��� �����ϰ�, ���� �Ÿ���ŭ �����̰� �� �� ��ġ�� ���
//
//- Proto type : moveALL(someobject * list[], int move)
//
//4.7 �迭 �ȿ� �ִ� ĳ���� ��ü���� �Ҹ� ��ų ������ �ݵ�� Sprite Ŭ����(�θ� Ŭ����)�� �Բ� �Ҹ�ǵ��� ��
#include <iostream>
using namespace std;
// ���ӿ��� ��Ÿ���� ��������Ʈ�� ��Ÿ���� Ŭ�����̴�. 
class Sprite {
public:
	int x, y; // ���� ��ġ
	char name;

	Sprite(int x, int y, char shape) : x{ x }, y{ y }, name{ name }{};
	virtual~Sprite() {}

	void move(int);
	void location() {
		cout << name << "�� ��ġ: (" << x << "," << y << ")\n";
	};
};

// ���ΰ� ��������Ʈ�� ��Ÿ����. 
class Hero:public Sprite {
public:
	Hero(int x, int y) :Sprite(x, y, 'H') {}
	void draw() {
		cout << 'H';
	}
	void move(char d) {
		if (d == 'a'){
			x-=1;
		}
		else if (d == 'w') {
			y -= 1;
		}
		else if (d == 's') {
			x-=1;
		}
		else if (d == 'd') {
			x+=1;
		}
	}
};

// ������ ��Ÿ���� Ŭ�����̴�. 
class Treasure: public Sprite {
public:
	Treasure(int x, int y) : Sprite(x, y,  'T') {}
	void move(char d) {}
};


//������ ��Ÿ���� Ŭ�����̴�.
class Enemy : public Sprite{
	Enemy(int x, int y) :Sprite(x, y, 'E') {}
	void move(char d) {}
};

void moveAll() {
}

