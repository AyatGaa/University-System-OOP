#include <iostream>
#include "Person.h"
#include "Manager.h"
#include "Student.h"
#include "Instructor.h"
#include "Employee.h"
#include "Faculty.h"
#include "University.h"
#include "Course.h"
#include "Department.h"

Manager* Manager::instance=nullptr;

    int main() {
        Manager* man1 = Manager::getInstance("Manager one ",22,123,10000);
        man1->role();
        vector<Course> c1; University u; Faculty f;
        Student st1("Student one",20,2002,3.7);
    //    st1.role();
        Instructor ins1("Instructor ",19,2001,1250,3);
    //    ins1.role();
        Employee emp1("Employee ",15,145,6000);
    //    emp1.role();
        cout<<"-----------------------------"<<endl;
        Course c2("course ", 7 );
        Department d("department name", c1);
        Student s2("student name ", 4, 3, 2);
        u.addFaculty(f);
        f.addEmployee(emp1);
        f.addInstructor(ins1);
        f.addStudent(s2);
        f.addDepartment(d);
        d.addCourse(c2);
        cout<< "======== Faculties detailes ======= "<<endl;
        f.details_fac();
        cout<< "======= Universities detalies ========"<<endl;
        u.details_uni();
        cout<< "=========== Departments and Courses detailes ============"<<endl;
        d.details_dpart();
        return 0;}
