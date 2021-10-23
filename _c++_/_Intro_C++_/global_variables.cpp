#include <iostream>

using namespace std;
int c=10;

int main (){
    int a , b;
    int c ;
    cout<<"enter num1"<<endl;
    cin>>a;
    cout<<"enter num2"<<endl;
    cin>>b;
    c=a+b ; 
    cout<<"THE SUM OF TWO NO (C) IS : "<<c<<endl;
    cout<<"THE GLOBAL VALUE OF C IS : "<<::c<<endl; // :: --> scope resolution operator [puts global value]
}