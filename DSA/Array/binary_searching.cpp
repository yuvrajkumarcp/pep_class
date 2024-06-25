#include <iostream>
using namespace std;
 string binarysearch(int arr[], int size, int key){
    int start=0;
    int end = size -1;
    int mid = (start + end)/2;

    if (arr[mid]==key){
        return "Find";
    }
    while(start <= end){
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = (start + end)/2;
    }
        return "Not Find";
 }

int main(){
    int arr[]={2,3,7,5,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int key = 5;

   cout<< binarysearch(arr,size, key);
   
   

    return 0;
}