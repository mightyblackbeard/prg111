#include "Student.hpp"
#include "UTILITIES.hpp"
#include <iostream>



Student::Student()
{
	m_id = 1;
	m_capacity = 10;
	m_grades = new float[m_capacity];
	
	m_num_grades = 0;
}


Student::~Student()
{
}

void Student::AddGrade(float grade)
{
	//std::cout << "num grades = " << m_num_grades << " - capacity = " << m_capacity << std::endl;
	if (m_num_grades >= m_capacity)
	{
		ExtendIntArray(&m_grades, m_capacity);
		m_capacity += 10;
	}
	
	m_grades[m_num_grades] = grade;
	m_num_grades++;
}

void Student::AddGrade(int numgrades)
{
	for (int i = 0; i < numgrades; i++)
	{
		AddGrade((float)i+1);
	}
}

void Student::Debug()
{
	for (int i = 0; i < m_num_grades; i++)
	{
		std::cout << m_grades[i] << "\n";
	}
}


void Student::ClearGrades()
{
	delete[] m_grades;
	m_num_grades = 0;
	m_capacity = 10;
	m_grades = new float[m_capacity];
}
