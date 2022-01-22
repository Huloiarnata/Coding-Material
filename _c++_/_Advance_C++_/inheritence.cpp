#include <iostream>
using namespace std;
class AbstractStudent //abstract class
{
    virtual void RuleForPromotion()=0; 
    //pure virtual function this will make this
    // obligatory for any class who sign up for this class to follow this method
};
class Student:AbstractStudent
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
       void RuleForPromotion()
       {
           if(salary>4000)
              {
                  cout<<name<<" you are promoted!!"<<endl;
              }
           else
              {
                  cout<<name<<" you arn't promoted"<<endl;
              }
       }
};
class Developers:Student // developer inherited all the property of Student class
{
    public:
       string FavProgrammingLanguage;
       Developers(int ID, string Name, string favProgrammingLanguage)
       :Student(ID,Name)
       {
           FavProgrammingLanguage = favProgrammingLanguage;
       }
       
};
int main(void)
{
    Student stud_1(1001,"Ronit kumar");
    Student stud_2(1002,"RAM");
    Developers d;
    stud_1.GetInfo();
    stud_2.GetInfo();
    stud_1.Update(2000);
    stud_1.GetInfo();
    stud_2.GetInfo();
    stud_1.RuleForPromotion();
    stud_2.RuleForPromotion();
}