#include<iostream>
using namespace std;
class message
{
     public:
    void sendmessage(string email,string message)
    {
        cout<<"email sent successfully:"<<endl;
        cout<<"email:"<<email<<endl;
        cout<<"message:"<<message<<endl;
    }
    void sendmessage(long long ph,int otp)
    {
        cout<<"OTP sent successfully:"<<endl;
        cout<<"phone number:"<<ph<<endl;
        cout<<"OTP:"<<otp<<endl; 
    }
};
int main()
{
    message m1;
    m1.sendmessage("some@gamil.com","hello world");
    m1.sendmessage(9980976656,123);
}
   