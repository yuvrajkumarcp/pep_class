#include <iostream>
 using namespace std;

 int factorial(int n){
   if (n==0) return 1;
   return n * factorial(n-1);
 }

 int power(int n){
    if(n==0) return 1;
     return 2 * power(n-1) ;
 }

 void print(int n){
    if(n==0) return;
     print (n-1);
    cout<<n<<endl;

   
 }

 void homego(int src , int dest){
    if(src == dest) return ;
    homego(src++ , dest);
 }
 int main(){
   //cout<< factorial(5);

 //  print(5);
 //cout<<  power(10);
    homego(50, 90);
 }