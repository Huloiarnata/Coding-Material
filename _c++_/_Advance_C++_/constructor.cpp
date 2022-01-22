#include <iostream>
using namespace std;
class Student
{
    public: 
       int id; 
       string name;
       float salary;
       Student(int ID, string Name, float Salary)
       {
           id=ID;
           name=Name;
           salary=Salary;
       }
       void GetInfo()
       {
           cout<<"ID of student: "<<id<<endl;
           cout<<"NAME of student: "<<name<<endl;
           cout<<"SALARY of student: "<<salary<<endl;
           cout<<'\n'<<endl;
       }
};
int main(void)
{
    Student stud_1(1001,"Ronit kumar",5000);
    Student stud_2(1002,"RAM",6000);
    stud_1.GetInfo();
    stud_2.GetInfo();
}