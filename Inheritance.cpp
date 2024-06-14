#include <iostream>
using namespace std;
class Animal {
    public:
    void eat(){
        cout<< "Eating..." <<endl;
    }

    private:
    void privatemethod(){

    }

    protected:
    void protectedmethod(){

    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking..."<<endl;
    }

   

};


int main(){
    Dog d1;
    d1.eat();
    d1.bark();

    
}
