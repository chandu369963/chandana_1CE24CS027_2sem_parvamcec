#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstrean fout;
    fout.open("1_file_handling.txt",ios::app);
    fout<<"c++ programming\n";
    fout.close();
    cout<<"file is closed"<<endl;
}