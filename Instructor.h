//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_INSTRUCTOR_H
#define PROJECT_INSTRUCTOR_H

#include "Person.h"


    class Instructor : public Person{
    public:
        int salary;
        int hours;
        Instructor(string n,int a,int i,int s,int h): Person(n,a,i),salary(s),hours(h){}
        Instructor(){
        }
        void role(){
            cout<<"this role of instructor...\n";
            cout<<"name: "<<name<<"| age: "<<age<<"| id: "<<id<<"\n";
        }
    };


#endif //PROJECT_INSTRUCTOR_H
