#include <iostream>
#include "Student.h"
#include "compare.h"

int main() {
    Student student1;
    student1.setName("Alina");
    student1.setMathGrade(8.5);
    student1.setEnglishGrade(7.0);
    student1.setHistoryGrade(9.0);

    Student student2;
    student2.setName("Bob");
    student2.setMathGrade(7.0);
    student2.setEnglishGrade(8.0);
    student2.setHistoryGrade(6.5);

    
    int resultName = compareByName(student1, student2);

    if (resultName == 0) {
        std::cout << "Studentii au acelasi nume." << std::endl;
    }
    else if (resultName > 0) {
        std::cout << student1.getName() << " vine dupa " << student2.getName() << " in ordine alfabetica." << std::endl;
    }
    else {
        std::cout << student1.getName() << " vine inainte de " << student2.getName() << " in ordine alfabetica." << std::endl;
    }

    
    int resultMath = CompareByMathGrade(student1, student2);

    if (resultMath == 0) {
        std::cout << "Studentii au aceeasi nota la Matematica." << std::endl;
    }
    else if (resultMath > 0) {
        std::cout << student1.getName() << " are o nota mai mare la Matematica decat " << student2.getName() << std::endl;
    }
    else {
        std::cout << student1.getName() << " are o nota mai mica la Matematica decat " << student2.getName() << std::endl;
    }
    int resultAverage = CompareByAverageGrade(student1, student2);

    if (resultMath == 0) {
        std::cout << "Studentii au aceeasi medie." << std::endl;
    }
    else if (resultMath > 0) {
        std::cout << student1.getName() << " are media mai mare decat " << student2.getName() << std::endl;
    }
    else {
        std::cout << student1.getName() << " are media mai mica decat " << student2.getName() << std::endl;
    }
    return 0;
}

