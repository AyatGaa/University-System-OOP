//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_FACULTY_H
#define PROJECT_FACULTY_H
#include <iostream>
#include <vector>
#include <fstream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"

#include "Instructor.h"
#include "Department.h"
using namespace std;

    class Faculty {
    public:
            string title = "uni";
            vector<Student> student ;
            vector<Employee> emp;
            vector<Instructor> inst;
            vector<Department> dpart;
            Faculty(string tf, vector<Student> s, vector<Employee> e, vector<Instructor> i, vector<Department> d){
                title =tf;
                emp = e; student = s;
                inst = i; dpart = d;
            }
    Faculty(){}
            void details_fac(){
                ifstream factFile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\faculties.txt");
                string emplines, stdlines, instlines, dpartlines, factlines;
                cout<<"List of Faculties : "<<endl;
                cout<< " Faculty Name |"<< "Employee  data |"<< " Students Data |    "<< "Instructors Data  |  "<< " Department Data   |     "<<endl;
                while(getline(factFile, factlines)){
                        ifstream emptFile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\employee.txt");
                        getline(emptFile, emplines);
                        ifstream stdFile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\students.txt");
                        getline(stdFile, stdlines);
                        ifstream instFile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\instructor.txt");
                        getline(instFile, instlines);
                        ifstream dpartFile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\instructor.txt");
                        getline(dpartFile, dpartlines);
                        cout<< factlines<<"        |" <<emplines<<"         | " <<stdlines <<"        | "<<instlines<< "       |"<<dpartlines<<endl;}
            }

            void addStudent(Student s){
                fstream studentFile;
                studentFile.open("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\students.txt", std::ios_base::app);
                student.push_back(s);
                studentFile<<s.id<<" "<<s.name<<" "<<s.age<<" \n";
                studentFile.close();
            }
            void addEmployee(Employee e){
                fstream employeeFile;
                employeeFile.open("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\employee.txt", std::ios_base::app);
                emp.push_back(e);
                employeeFile<<e.id<<" "<<e.name<<" "<<e.age<<" \n";
                employeeFile.close();
            }
            void addInstructor(Instructor i){
                fstream instructorFile;
                instructorFile.open("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\instructor.txt", std::ios_base::app);
                inst.push_back(i);
                instructorFile<<i.id<<" "<<i.name<<" "<<i.hours<<" "<< i.salary<<" " << i.age<<" \n";
                instructorFile.close();
            }
    void addDepartment(Department d){
                fstream departmentFile;
                departmentFile.open("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\department.txt", std::ios_base::app);
                dpart.push_back(d);
                departmentFile<<d.title<<" " <<" \n";
                departmentFile.close();
            }
    };


#endif //PROJECT_FACULTY_H
