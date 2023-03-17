#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <stdlib.h>
#include <string>

int Student::GetAge() {
	return this->age;
}

Student::Student()
{
	//this->age = 2000;
	this->SetAge(2000);
	this->SetName("default name");
	//this->name = nullptr;
}

Student::Student(int input_age, int input_colorid)
{
	this->age = input_age;
	this->colorId = input_colorid;
	this->name = nullptr;
}

int Student::GetColorId()
{
	return this->colorId;
}

Student::Student(int input_age)
{
	this->age = input_age;
	this->name = nullptr;
}

Student::Student(const char* input_name)
{
	this->age = 0;
	this->SetName(input_name);
}

char* Student::GetName()
{
	return this->name;
}

bool Student::SetName(const char* input_name)
{
	int string_length = 0;
	while (input_name[string_length] != 0)
		string_length++;

	this->name = (char*)malloc(string_length+1);
	memset(this->name, 0, string_length + 1);
	if (this->name != nullptr)
	{
		memcpy(this->name, input_name, string_length);
		//strcpy(this->name, input_name);
		return true;
	}
	return false;
}

Student::~Student()
{
	if (this->name != nullptr)
	{
		free(this->name);
		//delete this->nume;
		//delete[] this->nume;
	}
}

bool Student::SetAge(int input_age) {
	this->age = input_age;
	return true;
}