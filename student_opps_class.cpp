#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int Roll_Number;
    double PhoneNo;

    void printName(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<PhoneNo;
    }
    


};
int main(){
     Student s1;
     s1.name="Ritik kumar";
     s1.age=22;
     s1.PhoneNo=62035;

     s1.printName();

}