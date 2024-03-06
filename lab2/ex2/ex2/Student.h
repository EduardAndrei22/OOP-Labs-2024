#pragma once
#include <string>

class Student
{
private:
    std::string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:
    
    Student();

   
    void setName(const std::string& studentName);
    std::string getName() const;

    void setMathGrade(float grade);
    float getMathGrade() const;

    void setEnglishGrade(float grade);
    float getEnglishGrade() const;

    void setHistoryGrade(float grade);
    float getHistoryGrade() const;

    // Calculate average grade
    float calculateAverage() const;
};

