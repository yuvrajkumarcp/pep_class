#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;

    person(string name, int age){
    cout<<"my name is "<<name <<endl;
    cout<<"my age is "<<age <<endl;
    }

    ~person(){
        cout<<"Destructor called"<<endl;
           
     }

};
int main(){
    person p1("Ritik", 22);

}