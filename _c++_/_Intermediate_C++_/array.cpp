// Array are collection of homogeneous items in a contiguous memory locations
// there are two types of array - 

// 1) statically declared array-->Statically declared arrays are allocated memory 
// at compile time and their size is fixed, i.e., cannot be changed later. 

// 2) dynamically declared array-->If you want to be able to alter the size of your array at run time, 
// then declare dynamic arrays. These are done with pointers and the new operator


#include <iostream>
using namespace std;

int main()

{ //statically declared array-->

    int marks[4]={}; //Created an empty array
    marks[0]=1; //storing values in the aray position wise
    marks[1]=2;
    marks[2]=3;
    marks[3]=10;
    cout<<marks[0]<<endl;// printing values stored in the array position wise
    cout<<"Address of marks[0] : "<<&marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<"Address of marks[1] : "<<&marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<"Address of marks[2] : "<<&marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"Address of marks[3] : "<<&marks[3]<<endl;
    cout<<"Address of the array : "<<marks<<endl; //when we output marks it will give address of the first block 
    cout<<"size of array : "<<sizeof(marks)<<endl;
    cout<<"Debug : "<<sizeof(marks)/sizeof(marks[0])<<endl;

  // Dynamically declared array-->

  
    for (int i = 0; i<sizeof(marks)/sizeof(marks[0]); i++)// with this FOR loop we are updating value of a statically declared array dynamically
        {
        marks[i]=22;

        cout<<"updated value of marks "<<i<<" is :"<<marks[i]<<endl;
        } 

    return 0;
}
