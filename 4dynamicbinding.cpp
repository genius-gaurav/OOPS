#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()
    {
        cout<<"Drawing shape"<<endl;
    
    }
};
class circle : public Shape
{
    public:
    void draw() override 
    {
        cout<<"Drawing circle"<<endl;
    }
};
class box : public Shape
{
    public:
    void draw() override 
    {
        cout<<"Drawing box"<<endl;
    }
};
class triangle : public Shape
{
    public:
    void draw() override 
    {
        cout<<"Drawing triangle"<<endl;
    }
};
int main(){
    Shape *ptr;
    circle c1;
    box b1;
    triangle t1;
    
    ptr = &c1;
    ptr->draw();
    ptr = &b1;
    ptr->draw();
    ptr = &t1;
    ptr->draw();
    return 0;
}