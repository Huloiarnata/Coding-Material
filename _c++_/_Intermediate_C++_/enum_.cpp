#include <iostream>
using namespace std;
// Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values. 
// These values are defined by the programmer at the time of declaring the enumerated type.
// When we assign a float value in a character value then compiler generates an error in the same way
// if we try to assign any other value to the enumerated data types the compiler generates an error. 
// Enumerator types of values are also known as enumerators. 
// It is also assigned by zero the same as the array. It can also be used with switch statements.

int main()
{
    enum Gender{male,female}; // defining enum 
    cout<<male<<endl;
    cout<<female<<endl;

    
    // Creating Gender type variable
    Gender gender = male;
 
    switch (gender)
    {
    case male:
        cout << "Gender is Male";
        break;
    case female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
}