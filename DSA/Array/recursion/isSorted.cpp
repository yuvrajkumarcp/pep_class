#include <iostream>
using namespace std;
string isSorted(int arr[], int size){
    if (size == 0 || size == 1) return "true";

    if(arr[0] > arr[1]){
        return "false";
    }
        else {
            return isSorted(arr +1 , size - 1);
        }
    }

int main(){
    int arr[]={1,2,7,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
   cout<< isSorted(arr,size);
}