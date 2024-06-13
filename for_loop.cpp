#include <iostream>
using namespace std;
int main(){
    //for loop
    // for(initilization;termination;update){

    // }
    // for(int i=1; i<=10 ; i++)
    // cout<<i<<endl;
    int num, sum;
    cout<<"Enter a positive number ";
    cin>>num;
    for(int i=1;i<=num;i++){
        sum += i;
    }
    cout<<"Sum is "<< sum;
    return 0;
}