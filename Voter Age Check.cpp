#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try
    {
        if(age<18)
        throw age;
        else
        cout<<"Voter Eligible"<<endl;
        
    }
    catch(int age)
    { 
        cout<<"ERROR"<<endl;
        cout<<"Invalid age "<<age<<" Minimum age to Vote~>18"<<endl;
    }
}
