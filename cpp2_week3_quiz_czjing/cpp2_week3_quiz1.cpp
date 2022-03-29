// cpp2_week3_quiz1
// coding: czjing
// data: 2021.09.22

#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <cstdlib>  // srand
#include <ctime>    // time

using namespace std;


class Circle
{
public:
	Circle() { this->x = 100 + rand() % 101; this->y = 200 + rand() % 101; this->radius = rand() % 51; };
	Circle(int xval, int yval, int r) : x(xval), y(yval), radius(r) {};

	void setRadius(int newRadius) { this->radius = newRadius; };
	int getRadius() const { return this->radius; };

	void draw();
	void move();

private:
	int x, y, radius;
};

void Circle::draw(){
	HDC hdc = GetWindowDC(GetForegroundWindow());
	// Ellipse (HDC, nLeftRect, nTopRect, nRightRect, nBottomRect)
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

void Circle::move() {
	this->x += 100 + rand() % 101;
	this->y += 100 + rand() % 101;
}


int main() {

	srand(time(NULL));   // return rand() % ( high - low + 1 ) + low;

	int n;
	cout << ">>> please enter size of the list:  ";
	cin >> n;


	Circle* p = new Circle[n];
	for (int i=0; i < n; i++) {
		p[i].draw();
		p[i].move();
	}
	delete[] p;


	// Case_1: Circle *p
	Circle* p1 = new Circle{ 10, 10, 10 };
	p1->setRadius(20);    // 사용 가능
	cout << ">>> (Circle *p1) p1->getRadius(): " << p1->getRadius() << endl;
	delete p1;

	// Case_2: Circle *p
	const Circle* p2 = new Circle{ 10, 10, 10 };
	//p2->setRadius(20);   // 사용 불가
	cout << ">>> (const Circle* p2) p2->getRadius(): " << p2->getRadius() << endl;
	delete p2;

	// Case_2: Circle *p
	Circle* const p3 = new Circle{ 10, 10, 10 };
	p3->setRadius(20);    // 사용 가능
	cout << ">>> (Circle* const p3) p3->getRadius(): " << p3->getRadius() << endl;
	delete p3;

	_getch();
	return 0;
}