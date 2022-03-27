//3..mydat ���� reader ���α׷��� �ۼ�.
//
//3.1 mydat file reader ���α׷���.mydat ���ϸ��� �Է� �ް� ������ ���� �� �� �ȿ� ����� ��� ������ ����ϴ� ������ �Ѵ�.
//
//3.2.mydat ������ �а�(Student.h �̿�) ��� �л� ��ü�� ������ ���� �迭�� �����϶�.�迭�� ������� ��ü �л��� ���� �����ؾ� �Ѵ�.
//
//3.2.1 student.mydat ���� ��
//
//- student.mydat�� �л��� ���� ���� �� Header �� �� �л��� �̸�, �й��� ����� Entry part �� ������

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