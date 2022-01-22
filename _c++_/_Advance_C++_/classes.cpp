#include <iostream>
using namespace std;
class Student
//class is a user defined datatype
{
    public: //access modifier
       int id; // attributes
       string name;
       float salary;
};
int main(void)
{
    Student s1;
    s1.id=10001;
    s1.name="Ronit Kumar";
    s1.salary=19;
    
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    cout<<s1.salary<<endl; 
}