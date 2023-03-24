#pragma once
class Student
{
	//3 modificatori de access: private, protected, public
	//by default: private
	int age;
	char* name;
	int max_name_length;
public:
	Student();
	Student(int input_age);
	Student(const char* input_name);
	~Student();
	bool SetAge(int input_age);
	int GetAge();
	bool SetName(const char* name);
	const char* GetName();
};

