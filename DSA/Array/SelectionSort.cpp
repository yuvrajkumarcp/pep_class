#include<iostream>
using namespace std;


void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        
        int min = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
       
        swap(arr[i], arr[min]);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    cout << std::endl;
}




int main(){
    int arr[]={2,3,7,5,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    


    selectionSort(arr,size);
    printArray(arr, size);
   
   

    return 0;
}