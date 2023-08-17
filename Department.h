//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_DEPARTMENT_H
#define PROJECT_DEPARTMENT_H
#include <vector>
#include <string>
#include "Course.h"
#include <fstream>
#include <iostream>
using namespace std;


    class Department {
    public :
        vector<Course> courses;
        string title ;
        Department(string t, vector<Course> c){
            title = t;
            courses = c;}
    void details_dpart(){
              ifstream departfile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\department.txt");
              ifstream coursetfile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\coursesFile.txt");
              string lines ,corlines;
              cout<< "Department name "<<endl;
              while(getline(departfile, lines)){cout<< lines<<endl;}
              cout<<"------------------------"<<endl;
              cout<< "ID  |"<<"Titel  "<<endl;
              while(getline(coursetfile, corlines)){
                  cout<< corlines<<endl;}
    }
    void addCourse(Course c){
        fstream coursesFile;
        coursesFile.open("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\coursesFile.txt", std::ios_base::app);
        courses.push_back(c);
        coursesFile<<c.courseID<<" "<<c.title<< " "<<" \n";
        coursesFile.close();}
    };


#endif //PR
// OJECT_DEPARTMENT_H
