#include <iostream>
using namespace std;

void printArr(int arr[], int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
int main(){
    int arr[5]={2,3,5,7,9};

    int hello[4]={5,8,2,7};

    for(int item : arr){
        cout<<item;
    }


    // for(int item : hello){
    //     cout<<item<<endl;
    // }

    // cout<<arr[0];

    // arr[0]=10;

    // cout<<arr[0]<<endl;

    // for(int item : arr){
    //     cout<<item<<" ";
    // }

    // int arra[8];
    // cout<<"Enter 8 number"<<endl;
    // for(int i ; i<8; i++){
    //     cin>> arra[i];
    // }

    

    // int num[5]={1,2,3,4,5};
    // int sum= 0;
    // for(int i=0;i<5;i++){
    //      sum= sum + num[i];
    // }
    // cout<<sum;

    printArr(arr,5);
   

    return 0;
}