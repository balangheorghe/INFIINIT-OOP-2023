#include "Student.h"
#include <stdio.h>

int main()
{
	Student s;
	s.SetAge(23);
	printf("Varsta studentului s: %d \n", s.GetAge());
	s.SetAge(26);
	printf("Varsta studentului s: %d \n", s.GetAge());

	s.SetName("OOP");
	printf("Numele studentului: %s\n", s.GetName());


	Student s2(25);
	printf("Varsta studentului s2: %d\n", s2.GetAge());

	Student s3("OOPExample2");
	printf("Numele studentului s3: %s\n", s3.GetName());
	printf("Varsta studentului s3: %d\n", s3.GetAge());
	bool a_reusit_set = s3.SetName("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	printf("Numele studentului s3: %s | a reusit set: %d\n", s3.GetName(), a_reusit_set);

	a_reusit_set = s3.SetName("bbbb");
	printf("Numele studentului s3: %s | a reusit set: %d\n", s3.GetName(), a_reusit_set);


	return 0;
}