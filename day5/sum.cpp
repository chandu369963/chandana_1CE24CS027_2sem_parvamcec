#include<iostream>
using namespace std;
class sum
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    sum s1;
    int res=s1.add(10,20);
    cout<<"the result:"<<res<<endl;
    cout<<"the result is:"<<s1.add(30,50,70)<<endl;
}