#include<iostream>
using namespace std;
// used for changing datatype of a variable
int main (){
    int a = 45;
    float b= 3.14565;
    cout<<""<<float(a)<<endl;
    cout<<""<<int(b)<<endl;
    cout<<""<<(float)a<<endl;
    cout<<""<<(int)b<<endl; 
    int c= int(b);
    cout<<"the integer value of b ie c is : "<<c<<endl;
    
    return 0 ;
}