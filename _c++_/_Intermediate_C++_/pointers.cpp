// what are pointers? --> Data type which holds the adress of other data types 
#include <iostream>
using namespace std;
int main()
{
int a=3;
int* b = &a;
// &-->address of operator
// *--> Deference operator

// double poiinters--> these stores address of a existing pointer
int** c= &b ;
cout<<&a<<endl;
cout<<b<<endl;
cout<<c<<endl;
//  here c has taken the adress value of b which is storing the adress of a
    
}