#pragma once

#define MAX_NAME_SIZE	30

class StudentHeader {
public:
	int entity_total;
};
class StudentEntity {
public:
	StudentEntity() {};
	char name[MAX_NAME_SIZE];
	char id[MAX_NAME_SIZE];
};
