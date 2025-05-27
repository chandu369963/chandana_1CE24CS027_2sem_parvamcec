#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    int weight;
    public:
    person(string name,int age,int weight):name(name),age(age)
    {
        cout<<"person constructor"<<endl;
    }
};
class employee:public person
{
    protected:
    int emp_id;
    public:
    employee(string name,int age,int weight,int emp_id):person(name,age,weight),emp_id(emp_id)
    {
        cout<<"student constructor"<<endl;
    }
    };
    class manager:public employee
    {
        int salary;
        public:
        manager(string name,int age,int weight,int emp_id,int salary):employee(name,age,weight,emp_id),salary(salary)
        {
            cout<<"maneger constructor"<<endl;
        }
        void display()
        {
        cout<<"maneger details:"<<endl; 
        cout<<"maneger name:"<<name<<endl;
        cout<<"maneger age:"<<age<<endl;
        cout<<"maneger weight:"<<weight<<endl;
        cout<<"maneger roll number:"<<emp_id<<endl;
        cout<<"maneger roll number:"<<salary<<endl;
    }
};
int main()
{
    manager s1("pavan",23,50,102,20000);
    s1.display();
};