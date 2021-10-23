/* there are three types of basic control structures :
--> sequence structure :  after entering this structure it is followed by consecustive action defined by the programer
--> loop structure : complex loops are made with help of conditioning & action [if/else]
--> selection structures : actions are run based on prior conditioning */

#include <iostream>
using namespace std;

int main(){
    int age ;
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"NOT ELIGIBLE FOR VOTING"<<endl;
        main() ;
    }
    else if (age==18)
    {
        cout<<"YOU ARE FIRST TIME VOTER"<<endl;
        main() ;
    }
    else (age>18);
    {
        cout<<"YOU ARE ELIGIBLE"<<endl;
        main() ;
    }
    
    return 0 ;


}
