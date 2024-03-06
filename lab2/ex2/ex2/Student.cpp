#include "Student.h"

Student::Student()
{
}


void Student::setName(const std::string& studentName)
{
    name = studentName;
}
std::string Student::getName() const
{
    return name;
}

void Student::setMathGrade(float grade)
{
   
    mathGrade = grade;
}

float Student::getMathGrade() const
{
    return mathGrade;
}

void Student::setEnglishGrade(float grade)
{
    
    englishGrade = grade;
}

float Student::getEnglishGrade() const
{
    return englishGrade;
}

void Student::setHistoryGrade(float grade)
{
    
    historyGrade = grade;
}

float Student::getHistoryGrade() const
{
    return historyGrade;
}

float Student::calculateAverage() const
{
    return (mathGrade + englishGrade + historyGrade) / 3.0;
}
