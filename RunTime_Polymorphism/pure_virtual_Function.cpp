#include <iostream>
using namespace std;

 class A{ 
    public:
     virtual void display() = 0;
 };

 class B :public A{
    public: 
    void display () override{
        cout<<"From B " <<endl;
    }
 };

 class c: public A{
    public:
    void display() override{
        cout<<" From c " << endl;
    }
 };
int main(){
    c c1;
    c1.display();
}
