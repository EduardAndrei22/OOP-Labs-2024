#include "student.h"
#include "compare.h"

int compareByName(const Student& student1, const Student& student2)
{
    const std::string& name1 = student1.getName();
    const std::string& name2 = student2.getName();

    // Parcurge caracterele și compară literă cu literă
    for (size_t i = 0; i < name1.length() && i < name2.length(); ++i) {
        if (name1[i] < name2[i]) {
            return -1; // student1 vine înaintea student2 în ordine alfabetică
        }
        else if (name1[i] > name2[i]) {
            return 1;  // student1 vine după student2 în ordine alfabetică
        }
    }

    
    // Returnează 0 dacă sunt identice
    return 0;
}
int CompareByMathGrade(const Student& student1, const Student& student2)
{
    if (student1.getMathGrade() > student2.getMathGrade())
        return 1; //primul student are nota mai mare
    else if(student1.getMathGrade()  <student2.getMathGrade())
        return -1; //al doilea student are nota mai mare
    return 0; // au note identice
}
int CompareByEnglishGrade(const Student& student1, const Student& student2)
{
    if (student1.getEnglishGrade() > student2.getEnglishGrade())
        return 1; //primul student are nota mai mare
    else if (student1.getEnglishGrade() < student2.getEnglishGrade())
        return -1; //al doilea student are nota mai mare
    return 0; // au note identice
}
int CompareByHistoryGrade(const Student& student1, const Student& student2)
{
    if (student1.getHistoryGrade() > student2.getHistoryGrade())
        return 1; //primul student are nota mai mare
    else if (student1.getHistoryGrade() < student2.getHistoryGrade())
        return -1; //al doilea student are nota mai mare
    return 0; // au note identice
}
int CompareByAverageGrade(const Student& student1, const Student& student2)
{
    if (student1.calculateAverage() > student2.calculateAverage())
        return 1; //primul student are nota mai mare
    else if (student1.calculateAverage() < student2.calculateAverage())
        return -1; //al doilea student are nota mai mare
    return 0; // au note identice
}



