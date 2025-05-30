#include<fstream>
#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll_num;
    public:
    void getinput()
    { 
        cout<<"enter student name:"<<endl;
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
    double a=10;
    cout<<"size of a:"<<sizeof(a)<<endl;
    student s1;
    ofstream fout("student.dat",ios::binary);
    s1.getinput();
    fout.write((char*)&s1,sizeof(s1));
    fout.close();
    student s2;
    ifstream fin("student.dat",ios::binary);
    fin.read((char*)&s2,sizeof(s2));
    s2.displayinfo();
    return 0;
}