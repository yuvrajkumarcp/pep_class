#include <iostream>
using namespace std;

int main(){

    // int x=5;
    // int *ptr = &x;
    // cout<<x << endl;  //print the value of x.
    // cout<<&x<<endl;   //print the address of x.
    // cout<<ptr<<endl;  //address of var.
    // cout<<*ptr<<endl;  //dereferencing the pointer

    int var=10;
    int *ptr=&var;
    cout<<ptr<<endl;
    int **ptr1= &ptr;
    cout<<ptr1<<endl;
    int ***ptr2=&ptr1;
    cout<<ptr2;

}