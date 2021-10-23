#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Pointer arithmatic:
    // new_address=current_address+i*sizeof_data_type
    int demo[10]={1,2,3,4,5,6,7,8,9,10};
    int* p = demo;//address 
    cout<<"Address of demo : "<< *p<<endl;

    


    for (int i=0; i< sizeof(demo)/sizeof(demo[0]); i++)
    {
        cout<<"the element of consecutive blocks of array are : "<<demo[i]<<endl;
        cout<<"the address of consecutive block is : "<<*(p+i)<<endl;
    }
    
    
    
    return 0;
}