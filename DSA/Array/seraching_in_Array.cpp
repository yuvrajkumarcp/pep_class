#include <iostream>
using namespace std;

string linearSearching(int arr[], int n, int key){
    for(int i=0; i<n;i++){
        if(arr[i]==key){
             return "Find";
        }     
    }
    return "Not find";
}
int main(){
    int arr[5]={2,13,5,2,5};
   cout<< linearSearching(arr ,5, 5);
    
}