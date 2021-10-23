#include <iostream>
using namespace std ;
int main (){
    // logical operators &&-->[and], || --> or, !()--> not operator
    int a= 4 , b=6 ;
    cout<<"and operator :  "<<((a==b)&&(a>=b))<<endl;
    cout<<"or operator :  "<<((a==b) || (a<=b))<<endl;
    cout<<"not operator :  "<<(!(a!=b))<<endl;
    return 0;
}