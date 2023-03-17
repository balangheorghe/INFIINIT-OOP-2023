#pragma once
class Student
{
	int age;
	int colorId;
	char* name;
public:
	//new -> delete
	//malloc -> free
	//new[] -> delete[]
	Student();
	Student(int input_age);
	Student(int input_age, int input_colorid);
	Student(const char* input_name);

	~Student();

	bool SetAge(int age);
	int GetAge();
	int GetColorId();
	bool SetName(const char* input_name);
	char* GetName();
};

