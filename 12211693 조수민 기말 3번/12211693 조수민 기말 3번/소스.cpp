//3..mydat 파일 reader 프로그램을 작성.
//
//3.1 mydat file reader 프로그램은.mydat 파일명을 입력 받고 파일을 읽은 후 그 안에 저장된 모든 정보를 출력하는 역할을 한다.
//
//3.2.mydat 파일을 읽고(Student.h 이용) 모든 학생 객체를 저장할 동적 배열을 생성하라.배열의 사이즈는 전체 학생의 수로 지정해야 한다.
//
//3.2.1 student.mydat 구조 상세
//
//- student.mydat은 학생의 수가 저장 된 Header 와 각 학생의 이름, 학번을 저장된 Entry part 로 구성됨

#include "Student.h";
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream is("student.mydat");
	if (!is) {
		cerr << "open file error" << endl;
		exit(1);
	}
	StudentHeader student_header;
	is.read((char*)&student_header,sizeof(StudentHeader));
	cout << "entity_total: " << student_header.entity_total << endl;

	StudentEntity students;
	for (int i = 0; i < student_header.entity_total; i++) {
		is.read((char*)&students, sizeof(students));
		char* real_name = new char[student_header.entity_total];
		cout << "name : " << left << setw(10) << students.name << "id : " << left << setw(10) << students.id << endl;
	}
	is.seekg(100, ios::cur);
	char* key = new char[5];
	is.read((char*)key, 5);
	cout << "key : " << key << endl;
	return 0;

}