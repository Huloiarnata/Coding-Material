#include <iostream>
using namespace std;
class Student
{
    private: 
       int id; 
       string name;
       int salary;
    public:
       Student(int ID, string Name)
       {
           id=ID;
           name=Name;
           salary=0;
           
       }
       void GetInfo() //getter
       {
           cout<<"ID of student: "<<id<<endl;
           cout<<"NAME of student: "<<name<<endl;
           cout<<"SALARY of student: "<<salary<<endl;
           cout<<'\n'<<endl;
       }
       void Update(int addition)
       {
           salary=salary+addition;
       }
};
int main(void)
{
    Student stud_1(1001,"Ronit kumar");
    Student stud_2(1002,"RAM");
    stud_1.GetInfo();
    stud_2.GetInfo();
    stud_1.Update(2000);
    stud_1.GetInfo();
    stud_2.GetInfo();
}