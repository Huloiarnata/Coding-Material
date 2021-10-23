#include <iostream>
using namespace std;
//type function-name(argument);
int sum(int , int); // function prototyping

int main()
{
   int num1, num2 ;
   cout<<"Enter num1 : "<<endl;
   cin>>num1;
   cout<<"Enter num2 : "<<endl;
   cin>>num2;
   cout<<"The sum is :"<<sum(num1,num2)<<endl;
   return 0;
}
int sum(int a , int b) 
// Without function prototyping befor main() 
//the program will not be able to find function declared/made after main()
{
    int c= a + b;
    
}