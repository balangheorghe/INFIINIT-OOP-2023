#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"

int Student::GetAge() {
	return this->age;
}

bool Student::SetAge(int input_age) {
	this->age = input_age;
	return true;
}