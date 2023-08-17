// Created by Ayat Gamal on 8/16/2023.
#ifndef PROJECT_PERSON_H
#define PROJECT_PERSON_H
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    int id;
    virtual void role() = 0;
    Person(){}
    Person(string n,int a,int i){
        name = n;
        age = a;
        id = i;
    }
};
#endif //PROJECT_PERSON_H
