#include <iostream>
using namespace std;
//Union provide better memory manegment than structures

// All the members of union share same memory location. 
// Size of union is decided by the size of largest member of union. 
// If you want to use same memory location for two or more members, union is the best for that


union  salary
{
    int inr;
    char charecter;
    float usd;
};

int main()
{
    union salary s1;
    s1.inr= 20000;
    
    cout<<"salary in inr :" << s1.inr<<endl;
    s1.charecter= 'd';
    cout<<"checking salary in inr :" << s1.inr<<endl;// this will give a garbage value
    // as now the memory doesn't holds that value. upon printing s1.charecter we will get correct value 
    cout<<"checking the above commented : "<< s1.charecter<<endl; 

    return 0;
}