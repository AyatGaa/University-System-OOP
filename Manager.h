//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include "Person.h"

    class Manager :public Person {
        static Manager* instance;
        int salary;
        Manager(string n,int a,int i,int s):Person( n, a, i){
            salary = s;
        }
    public:
        void role(){
            cout<<"this role of Manager...\n";
            cout<<"name: "<<name<<"| age: "<<age<<"| id: "<<id<<"\n";
        }
        void setSalary(int s){
            salary=s;
        }
        int getSalary(){
            return salary;
        }
        static Manager* getInstance(string n,int a,int i,int s){
            if(instance==nullptr){
                instance=new Manager(n,a,i,s);
            }
            return instance;
        }
    };


#endif //PROJECT_MANAGER_H
