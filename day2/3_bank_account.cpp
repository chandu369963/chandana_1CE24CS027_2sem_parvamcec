#include<iostream>
using namespace std;
class bankaccount
{
    public:
    string holder_name;
    int acc_no;
    bankaccount(string name,int acc_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->acc_no=acc_no;
    }
    void display()
    {
        cout<<"holder name:"<<this->holder_name<<endl;
        cout<<"account number:"<<this->acc_no<<endl;
    }
};
int main()
{
    bankaccount b1("madhu",90);
    b1.display();
    return 0;
}