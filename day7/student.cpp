#include <iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll_num;
    public:
    void getinput()
    {        cout<<"enter student name:"<<endl;
        cin>>name;
        cout<<"enter student roll number:"<<endl;
        cin>>roll_num;
    }
    void displayinfo()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll number:"<<roll_num<<endl;
    }
};
int main()
{
    student students[3];
    for(int i=0;i<3;i++)
    {
        students[i].getinput();
        students[i].displayinfo();
    }
    return 0;
}