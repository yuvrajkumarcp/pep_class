#include <iostream>
using namespace std;
int stepcase(int n){
     if(n==0)return 0;
      if(n==1)return 1;

        return  stepcase( n-1 ) + stepcase(n-2); 
}
int main(){
 cout<< stepcase(3);
}