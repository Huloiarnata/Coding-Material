#include <iostream>
#include<iomanip>
using namespace std;
// user defined datatypes like classes . there are two ways of going around it

//Method_1

/* In this example we will be creating a registry for a student 
defining the variables in the structure and later inputting data with help of the */


 struct student
{
    int roll_no;
    char section;
    long long mobile_no;
    float marks;
};

//Method_2
/*in this example we will be creating a structure for employees data in a different and easier way*/    

typedef struct employee
{
    int e_id;
    long long mobile_no;
    float salary;
}ep;  //this will be used rather than employee


int main()
{
   { struct student ronit;
    struct student ram;
    ram.marks= 80;
    ram.mobile_no= 9810504402;
    ram.roll_no= 29;
    ram.section= 'd';
    ronit.marks= 89.8;
    ronit.mobile_no = 8010928824;
    ronit.roll_no = 30;
    ronit.section= 'a';

    cout<<"The details of Ram is :"<<ram.roll_no<<endl;
    cout<<"The details of Ram is :"<<ram.section<<endl;
    cout<<"The details of Ram is :"<<ram.marks<<endl;
    cout<<"The details of Ram is :"<<ram.mobile_no<<endl;
    cout<<"The details of Ronit is:"<< ronit.roll_no<<endl;
    cout<<"The details of Ronit is:"<< ronit.section<<endl;
    cout<<"The details of Ronit is:"<< ronit.marks<<endl;
    cout<<"The details of Ronit is:"<< ronit.mobile_no<<endl;};

    {
    ep suresh; // no need of struct employee <employee_name>
    suresh.e_id= 20;
    suresh.mobile_no= 8010928824;
    suresh.salary= 4000.256;
    cout<<"Details of employee :"<<suresh.e_id<<"  "<<suresh.mobile_no<<"   "<<suresh.salary<<endl;
    
    };
    
    return 0;
}