#include<iostream>
using namespace std;
/*this method is used for assigning different variables to a reference 
variables value done by 'data_type '& 'variable_name'='values'*/
int main(){
    float x;
    float & y=x;
    cout<<"enter float num : "<<endl;
    cin>>x;
    cout<<"refrence variable y value is :  "<<y<<endl;
}