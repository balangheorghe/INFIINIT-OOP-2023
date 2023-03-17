#include "Student.h"
#include <stdio.h>
#include <iostream>

int main()
{
	Student s;
	printf("Valoare lui s age este: %d | Valoare lui nume este: %s\n", s.GetAge(), s.GetName());
	Student s1(5);
	printf("Valoare lui s1 age este: %d | Valoare lui nume este: %s\n", s1.GetAge(), s1.GetName());
	Student s2("exempluPOO");
	printf("Valoare lui s2 age este: %d | Valoare lui nume este: %s\n", s2.GetAge(), s2.GetName());
	Student s3(5, 12345);
	printf("Valoare lui s3 age este: %d | Valoare lui nume este: %d | colorId: %d\n", s3.GetAge(), s3.GetName(), s3.GetColorId());
	//printf("Valoare lui age este: %d | %d | %s\n", s.GetAge(), 1, "INFIINIT");
	//s.SetAge(2023);
	//printf("Valoare lui age este: %d | %d | %s\n", s.GetAge(), 1, "INFIINIT");
	//s.SetAge(2024);
	//std::cout << "Valoarea lui age este: " << s.GetAge() << '\n';
	return 0;
}