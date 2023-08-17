//
// Created by Ayat Gamal on 8/16/2023.
//

#ifndef PROJECT_UNIVERSITY_H
#define PROJECT_UNIVERSITY_H
#include <fstream>
#include <vector>
#include "Manager.h"
#include "Faculty.h"

    class University {
    public:
        string title;
        vector<Faculty> faculties;
        Manager* manager;
        University(){}
        University(string tu, vector<Faculty> f, Manager* m ){
         title = tu;
         faculties = f;
         manager = m;
        }
        void details_uni(){
            ifstream unifile("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\faculties.txt");
            string unilines;
            cout<<"Faculty Data : "<<endl;
    //        cout<<"*** Manager : "<<manager<<endl;
            cout<<"==> list of Faculties <=="<<endl;
            while(getline(unifile, unilines)){
                cout<< unilines<<endl;}
            }
            void addFaculty(Faculty f){
                fstream facultiesFile;
                facultiesFile.open("C:\\Users\\Ayat Gamal\\CLionProjects\\Project\\files\\faculties.txt", std::ios_base::app);
                faculties.push_back(f);
                facultiesFile << f.title<< " "<<endl;
                facultiesFile.close(); }
    };


#endif //PROJECT_UNIVERSITY_H
