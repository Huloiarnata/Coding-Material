#include<iostream>
using namespace std ;
//if variable with decimal value isn't declared float it is taken as long double
int main (){
    cout<<"size of 12.34 :  "<<sizeof(12.34)<<endl;
    cout<<"size of 12.34f :  "<<sizeof(12.34f)<<endl;
    cout<<"size of 12.34F :  "<<sizeof(12.34F)<<endl;
    cout<<"size of 12.34l :  "<<sizeof(12.34l)<<endl;
    cout<<"size of 12.34L :  "<<sizeof(12.34L)<<endl;

}