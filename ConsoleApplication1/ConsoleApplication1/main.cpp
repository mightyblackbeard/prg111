#include <stdio.h>
#include "Student.hpp"

using namespace std;

int main()
{
	Student s;

	for (int i = 0; i < 30; i++)
	{
		s.AddGrade((float)i);
	}

	s.Debug();

	return 0;
}