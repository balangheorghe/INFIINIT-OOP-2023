#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <string>

Student::Student()
{
	this->age = 0;
	this->max_name_length = 20;
	this->name = new char[this->max_name_length];
}

Student::Student(int input_age)
{
	this->age = input_age;
	this->max_name_length = 20;
	this->name = new char[this->max_name_length];
}

Student::Student(const char* input_name)
{
	int strlen_name = strlen(input_name);
	this->max_name_length = 20;
	this->name = new char[this->max_name_length];
	if (strlen_name + 1 < this->max_name_length)
	{
		strcpy(this->name, input_name);
	}
	this->age = 123456;

	//this->SetName(input_name);
}

Student::~Student()
{
	if (this->name != nullptr)
	{
		delete this->name;
	}
}

bool Student::SetAge(int input_age)
{
	this->age = input_age;
	return true;
}

int Student::GetAge()
{
	return this->age;
}

bool Student::SetName(const char* input_name)
{
	int strlen_name = strlen(input_name);
	if (strlen_name + 1 < this->max_name_length)
	{
		strcpy(this->name, input_name);
		return true;
	}
	return false;
}

const char* Student::GetName()
{
	return this->name;
}