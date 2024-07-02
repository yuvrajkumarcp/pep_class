#include <iostream>
using namespace std;
int febonnic(int n){
    if(n==0)return 0;
      if(n==1)return 1;
    return febonnic( n-1 ) + febonnic(n-2); 

    
}
int main(){
   cout<< febonnic(8);
}