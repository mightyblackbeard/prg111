#include <stdio.h>
#include "Student.hpp"
#include "UTILITIES.hpp"
#include <iostream>
using namespace std;

void Interesting_Bug_Doesnt_Crash(bool make_crash = false)
{
	float* ptr = new float[10];
	for (int i = 0; i < 11; i++) {
		ptr[i] = i;
		std::cout << ptr[i] << std::endl;
	}
	if (make_crash == true)
		delete[] ptr;
}

int main()
{
	Student s;

	s.AddGrade(10);
	s.Debug();
	s.ClearGrades();
	s.AddGrade(20);

	//ExtendIntArray(&ptr, 10);
	//delete[] ptr;
	//Interesting_Bug_Doesnt_Crash(true);

	//for (int i = 0; i < 11; i++)
	//	s.AddGrade((float)i);
	s.Debug();
	//
	system("pause");
	return 0;
}