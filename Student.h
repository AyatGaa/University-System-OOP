//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H
#include "Person.h"

class Student : public Person{
public:
    float gpa;
    Student(string n,int a,int i,float g): Person(n,a,i),gpa(g){}
Student(){}
    void role(){
        cout<<"this role of student...\n";
        cout<<"name: "<<name<<"| age: "<<age<<"| id: "<<id<<"\n";
    }
};


#endif //PROJECT_STUDENT_H
