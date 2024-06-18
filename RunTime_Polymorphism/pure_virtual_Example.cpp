#include <iostream>
using namespace std;

class employee{
    public:
    virtual void salary() =0;

};

class FulltimeEmployee : public employee{
    public:
    void salary() override {

        cout<<"Salary = 90000"<< endl;

    }
    
};
class contractEmployee : public employee{
    public:
    void salary() override{
    cout<<"salary of Contract = 12000/class"<<endl;
    }
};
int main(){
    contractEmployee c1;
    c1.salary();
    FulltimeEmployee c2;
    c2.salary();

}