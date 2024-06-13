#include <iostream>
using namespace std;
void test(int n){
 n++;
 cout<<"Value of n is : "<< n <<endl;
}


int main(){
    int n;
    cin>>n;

    test(n);
    cout<<"Value in main : "<<n<<endl;
}