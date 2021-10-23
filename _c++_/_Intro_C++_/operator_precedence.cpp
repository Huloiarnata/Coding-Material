// in c++ programming operators takes precedence over each other if two operators have same precedence then we go with associativity
#include<iostream>
using namespace std;
int main(){
    int a=7 , b=20;
    cout<<"the value of a*b+56-20 is :  "<<a*b+56-20<<endl;
    /* * will takes precedence over other ;+ & - have same precedence but + is more associative then -
      so (((a*b)+56)-20) */
    cout<<"for verification of the above commented : "<<(((a*b)+56)-20)<<endl;
    return 0;
}