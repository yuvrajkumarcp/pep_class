#include <iostream>
using namespace std;

class base{
    public:
     virtual void display(){
        cout<<"From Base"<<endl;
    }
};

class derived : public base{
    public:
    void display() override{
        cout<<"From derived"<<endl;
    }
};

int main(){
    derived d1;
    base *ptr= &d1;
    ptr->display();
    return 0;
}