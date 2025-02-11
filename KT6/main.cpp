#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            string nimi;
            int ika;
            cout << "Student name ? " << endl;
            cin>> nimi;

            cout << "Student age ? " << endl;
            cin >> ika;

            Student newStudent(nimi, ika);

            studentList.push_back(newStudent);
        }
            break;
        case 1:
        {
            for (auto it = studentList.begin(); it != studentList.end(); ++it) {
                it->printStudentInfo();
            }
            break;
        }
        case 2:
        {
            sort(begin(studentList), end(studentList), [](Student& a, Student& b) {
                return a.getAge() < b.getAge();
            });
            for (auto it = studentList.begin(); it != studentList.end(); ++it) {
                it->printStudentInfo();
            }
        }
            break;

        case 3:
        {
            sort(begin(studentList), end(studentList), [](Student& a, Student& b) {
                return a.getName() < b.getName();
            });
            for (auto it = studentList.begin(); it != studentList.end(); ++it) {
                it->printStudentInfo();
            }
        }
            break;
        case 4:
        {
            string fname;
            cout << "Student to be found name = ? " << endl;
            cin>> fname ;

            auto it = find_if(studentList.begin(), studentList.end(),
                    [&fname](Student& student) {
                    return student.getName() == fname;
                    });

            if (it != studentList.end()) {
                cout << "\nStudent found:\n";
                it->printStudentInfo();
            } else {
                cout << "\nStudent not found.\n";
            }
        }
            break;

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
