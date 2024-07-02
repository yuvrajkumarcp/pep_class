#include <iostream>
using namespace std;
int sumArray(int arr[], int size) {
    // if the Array has no element
    if (size == 0)
        return 0;
        if(size == 1)
        return arr[0];

        int remainingpart = sumArray(arr+1 , size-1);
        int sum = arr[0] + remainingpart;
    return sum;
}

int main(){
    int arr[]={2,8,7,6,10};
    int size = sizeof(arr)/sizeof(arr[0]);
   cout<< sumArray(arr, size);
}