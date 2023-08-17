//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_COURSE_H
#define PROJECT_COURSE_H
#include <iostream>
#include <string>
using namespace std;

    class Course {
    public :
        string title;
        int courseID;
        Course(){}
        Course(string tc, int id){
            title = tc;
            courseID = id;
        }
    void details_c(){
        cout<< "course Title :"<< title<<endl;
        cout<< "course courseID :  "<< courseID<<endl;
        }
    };


#endif //PROJECT_COURSE_H
