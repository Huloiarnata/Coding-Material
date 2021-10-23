#include <iostream>
using namespace std;
int sum(int a , int b) // these are formal parameter which will be taking values from actual parameters
{
    int c= a + b;
    
}

int main()
{
   int num1, num2 ; // these are actual parameters
   cout<<"Enter num1 : "<<endl;
   cin>>num1;
   cout<<"Enter num2 : "<<endl;
   cin>>num2;
   cout<<"The sum is :"<<sum(num1,num2)<<endl;
   return 0;
}