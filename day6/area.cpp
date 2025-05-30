#include<iostream>
using namespace std;
class shape
{
    public:
    void calculatearea()
    {
        cout<<"area not defined for generic shape>"<<endl;
    }
};
class circle:public shape
{
    private:
    float radius;
    public:
    circle(float r)
    {
        radius =r;
    }
    void calculatearea()
    {
        float area=3.14*radius*radius;
        cout<<"area of circle:"<<area<<endl;
    }
};
class rectangle:public shape
{
    private:
    float length,width;
    public:
    rectangle(float l,float w)
    {
        length=l;
        width=w;
    }
    void calculatearea()
    {
        float area=length*width;
        cout<<"area of the rectangle:"<<area<<endl;
    }
};
class triangle:public shape
{
    private:
    float base,height;
    public:
    triangle(float b,float h)
    {
        base=b;
        height=h;
    }
    void calculatearea()
    {
        float area=0.5*base*height;
        cout<<"area of the triangle:"<<area<<endl;
    }
};
int main()
{
    circle c(5.0);
    rectangle r(10.0,4.5);
    triangle t(6.0,3.0);
    c.calculatearea();
    r.calculatearea();
    t.calculatearea();
}
    