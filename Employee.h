//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_EMPLOYEE_H
#define PROJECT_EMPLOYEE_H
#include "Person.h"

    class Employee :public Person {
        int salary;
    public:
        Employee(string n,int a,int i,int s): Person(n,a,i),salary(s){}
        Employee(){}
        void role(){
            cout<<"this role of employee...\n";
            cout<<"name: "<<name<<"| age: "<<age<<"| id: "<<id<<"\n";
        }
    };


#endif //PROJECT_EMPLOYEE_H
