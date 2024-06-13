#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    int Roll_Number;

    void giveTest(){

    }
};
//When a class is defining only the specification for the object is defined, no memory is allocated.
class calculation{
    public:
    double length;
    double breadth;
    double height;


    double calculateArea(){
        return length*breadth;
    }

    double calculateVolume(){
        return length*breadth*height;
    }
};

int main(){
    calculation c1;
    c1.length=5;
    c1.breadth=15;
    c1.height=25;



    calculation c2;
    c2.length=10;
    c1.breadth=25;
    c1.height=45;

    cout<<c1.calculateArea();
    cout<<c2.calculateVolume();


    return 0;
}