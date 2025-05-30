#include<iostream>
using namespace std;
int main()
{
    int arr[3]={10,20,30};
    cout<<"prinr arr:"<<arr<<endl;
    cout<<"address of 1 ele:"<<&arr[10]<<endl;
    cout<<"value:"<<*(arr+1)<<endl;
    int *ptr=arr;
    cout<<"value using pointer:"<<*(ptr+2)<<endl;
    cout<<"before:"<<arr[1]<<endl;
    cout<<"after:"<<arr[1]<<endl;
    ptr=&arr[1];
    ptr++;
    ptr=arr;
    cout<<"value:"<<*ptr<<endl;
    cout<<"first element:"<<arr[0]<<endl;
    cout<<"first element:"<<*(arr+0)<<endl;
    cout<<"first element:"<<*(ptr+0)<<endl;
    cout<<"first element:"<<arr[0]<<endl;
    cout<<"first element:"<<0[ptr]<<endl;
    cout<<"first element:"<<0[arr]<<endl;
    return 0;
    
}