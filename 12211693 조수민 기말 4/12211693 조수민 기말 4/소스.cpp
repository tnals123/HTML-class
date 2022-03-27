//4. 주어진 코드 question4를 기반으로 던전 게임을 아래와 같이 완성합니다.
//
//4.1 주어진 Sprite 클래스를 추상 클래스(abstract class)로 변경
//
//4.2 던전 캐릭터를 표현하기 위한 주인공 클래스, 몬스터 클래스, 보물 클래스는 주어진 Sprite 클래스를 상속받도록 구현
//
//4.3 ‘ >> ’ 연산자를 한번만 오버로딩 하여 주인공, 몬스터, 보물 객체를 cin으로 입력 받음
//
//Ex.Hero hero; cin >> hero;
//
//4.4 생성한 주인공, 몬스터, 보물 객체를 하나의 객체 배열에 전부 저장하여 사용(사이즈는 3으로 주인공 1, 몬스터 1, 보물 1개로 구성)
//
//4.5 배열 안에 있는 모든 객체의 현재 위치를 출력
//
//4.6 주어진 moveAll()을 배열 안에 있는 모든 객체를 한번에 움직이는 함수로 수정하고, 일정 거리만큼 움직이게 한 뒤 위치를 출력
//
//- Proto type : moveALL(someobject * list[], int move)
//
//4.7 배열 안에 있는 캐릭터 객체들을 소멸 시킬 때에는 반드시 Sprite 클래스(부모 클래스)도 함께 소멸되도록 함
#include <iostream>
using namespace std;
// 게임에서 나타나는 스프라이트를 나타내는 클래스이다. 
class Sprite {
public:
	int x, y; // 현재 위치
	char name;

	Sprite(int x, int y, char shape) : x{ x }, y{ y }, name{ name }{};
	virtual~Sprite() {}

	void move(int);
	void location() {
		cout << name << "의 위치: (" << x << "," << y << ")\n";
	};
};

// 주인공 스프라이트를 나타낸다. 
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

// 보물을 나타내는 클래스이다. 
class Treasure: public Sprite {
public:
	Treasure(int x, int y) : Sprite(x, y,  'T') {}
	void move(char d) {}
};


//괴물을 나타내는 클래스이다.
class Enemy : public Sprite{
	Enemy(int x, int y) :Sprite(x, y, 'E') {}
	void move(char d) {}
};

void moveAll() {
}

