#include<iostream>
using namespace std;
class bank
{
    private:
    string holder_name;
    int acc_num;
    public:
    bank(string name,int acc_num):holder_name(name),acc_num(acc_num)
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
        cout<<"name:"<<holder_name<<endl;
        cout<<"roll number:"<<acc_num<<endl;
    }
};
int main()
{
    bank s1("pavan",102);
    s1.display();

}