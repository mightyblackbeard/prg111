#pragma once
#ifndef STUDENT_HPP
#define	STUDENT_HPP

#include <string>;

class Student
{
private:
	int m_id;
	float* m_grades;
	int m_capacity;
	int m_num_grades;
	std::string m_Fname;
	std::string m_Lname;


public:
	Student();
	~Student();

	void AddGrade(float grade);
	void Debug();
	void IncreaseCap();
};

#endif

