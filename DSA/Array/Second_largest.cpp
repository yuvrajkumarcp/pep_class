#include<iostream>
using namespace std;

int getmax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if (arr[i]>max){
         max=arr[i];
        
        }

        for(int j=0;j<max;j++){
            if (arr[i]>max){
                max=arr[i];
            }
        }
         
    }
   return max;
}


int main(){
    int arr[5]={1,24,34,4,5};
    cout<< getmax (arr, 5);

}