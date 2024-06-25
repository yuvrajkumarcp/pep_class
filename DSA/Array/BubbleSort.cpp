#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    for (int i = size-1; i >= 0 ; i--) {
        
        for (int j = 0; j <= i - 1 ; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}
int main(){
    int arr[]={1 ,2, 3, 4 ,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    


    bubbleSort(arr,size);
    printArray(arr, size);
   
   

    return 0;
}