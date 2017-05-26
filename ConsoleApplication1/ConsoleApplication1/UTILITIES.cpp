#include "UTILITIES.hpp"

#include <iostream>

#define DEBUG_MODE
void ExtendIntArray(float** ptr, int oCap)
{
	
#ifdef DEBUG_MODE
	std::cout << "ExtendIntArray called" << std::endl;
#endif
	float* bkup = new float[oCap];

	for (int i = 0; i < oCap; i++)
	{
		bkup[i] = (*ptr)[i];
	}

	delete[] *ptr;
	*ptr = new float[oCap + 10];
	
	for (int i = 0; i < oCap; i++)
	{
		(*ptr)[i] = bkup[i];
	}

	delete[] bkup;
}

