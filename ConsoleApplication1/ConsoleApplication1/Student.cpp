#include "Student.hpp"
#include <iostream>



Student::Student()
{
	m_capacity = 10;
	m_grades = new float[m_capacity];
	m_num_grades = 0;
}


Student::~Student()
{
}

void Student::AddGrade(float grade)
{
	if (m_num_grades > m_capacity)
	{
		IncreaseCap();	
	}
	
	m_grades[m_num_grades] = grade;
	m_num_grades++;
}

void Student::Debug()
{
	for (int i = 0; i < m_num_grades; i++)
	{
		std::cout << m_grades[i];
	}
}

void Student::IncreaseCap()
{
	std::cout << "increasing array size.....";

	int oldcap = m_capacity;
	
	float* backup = new float[oldcap];
	

	for (int i = 0; i < oldcap; i++)
	{
		backup[i] = m_grades[i];
	}

	delete[] m_grades;
	m_capacity += 10;
	m_grades = new float[m_capacity];

	for (int i = 0; i < oldcap; i++)
	{
		m_grades[i] = backup[i];
	}

	delete[] backup;

	std::cout << "array size now " + m_capacity;
}
