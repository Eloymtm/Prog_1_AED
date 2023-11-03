#ifndef UNTITLED_DATA_H
#define UNTITLED_DATA_H

#include <iostream>
#include <set>
#include <map>
#include "Student.h"
#include "ClassandUc.h"
#include <vector>
#include <utility>
class Data {
public :
    std::vector<Student> student;
    std::set<Student> allStudents;
    std::multimap <ClassAndUC, Student> studentClasses;
    std:: map <UC, Class> ucClass;
    std:: map <int, UC> studentsPerUC;
    std::vector<std::pair<Student, int>> count;
    void addAllStudents(Student student);
    void printAllStudents();
    void UCcount(Data &obj);
    void nNumbers(int o);
    void addStudentsClasses(ClassAndUC uc, Student student);
    void searchByUc(std::string UC);
    void searchByClass(std::string class_);
    void searchByYear(char year, int &n, int flag);
    int ucOccupation(std::string uc);
    int classOccupation(std::string class_);
    int yearOccupation(char year);



    //void addUcClass(UC uc, Class class_);
};



#endif //UNTITLED_DATA_H

