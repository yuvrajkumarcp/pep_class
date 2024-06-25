//Lower Bound:- Lower Bound algo finds the first or the smallest index in a sorted array where 
// the value at that given index is greater than or equal to given key i.
#include <iostream>
using namespace std;

int lowerBound(int arr[], int length, int target) {
    int start = 0, end = length;
     
    
    while (start < end) {
        
        int mid = start + (end - start) / 2;
       
       
        if (arr[mid] < target) {
            
            start = mid + 1;
        } else {
            end = mid;
        }

    }
    return start;
}

int main() {
    int arr[] = {3,5,7,8,15};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int index = lowerBound(arr, length, target);
    cout << "The lower bound of " << target << " is at index: " << index << endl;

    return 0;
}
