#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    string gender;
    public:
    person(string name,int age,string gender):name(name),age(age),gender(gender)
    {
        person<<"person constructor"<<endl
    }
};