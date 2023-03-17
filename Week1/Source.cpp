#include "Student.h"
#include <stdio.h>
#include <iostream>

int main()
{
	Student s;
	s.SetAge(2023);
	//printf("Valoare lui age este: %d\n", s.GetAge());
	s.SetAge(2024);
	std::cout << "Valoarea lui age este: " << s.GetAge() << '\n';
	return 0;
}