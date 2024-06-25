#include <iostream>
using namespace std;
void reverse(int arr[], int size){
    int start=arr[0];
    int end= arr[size -1];

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
         
    }


}
int main(){
    int arr[7]={2, 5, 9, 6, 3, 1, 8};
    reverse(arr, 7);
}