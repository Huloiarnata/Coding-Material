#include <iostream>
using namespace std;

int main(){
    int age; 
    cout<<"ENTER YOUR AGE : "<<endl;
    cin>>age;
    switch(age)
    {
    case 18:
        cout<<"HELLO NEW VOTER"<<endl;
        break;
    case 5:
        cout<<"YOU ARE NOT ELIGIBLE"<<endl;
        break;
    case 50:
        cout<<"YOU ARE ELIGIBLE"<<endl;
        break;
    
    default:
        cout<<"no special cases"<<endl;
        break;
    }
    return 0;
}