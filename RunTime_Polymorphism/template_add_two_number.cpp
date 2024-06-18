#include <iostream>
using namespace std;

template <class T>
class Add {
    public:
    T num;

    T ADD(T A, T B){
        return num= A+B;
    }

    T SUBTRACT(T A, T B){

    }
};

int main(){
    Add <int> a1;
   cout<< a1.ADD( 43, 45);
   
}