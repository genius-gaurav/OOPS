#include<iostream>
using namespace std;
class Animal {
    protected:
    int age;

};
class dog : public Animal {
    public:
    void setAge(int a)
    {
        age = a;

    }
    void display()
    {
        cout<<"Age of dog :"<<age<<endl;
    }

};
int main() {
    dog d1;
    int a;
    cin>>a;
    d1.setAge(a);
    d1.display();
    return 0;
}

