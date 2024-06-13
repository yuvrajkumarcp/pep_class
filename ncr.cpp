#include <iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
   int num=factorial(n);
   int den=factorial(r)*factorial(n);
   
}
int main(){
     factorial();

}