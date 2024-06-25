#include <iostream>
using namespace std;

void findPairs(int nums[], int length, int target) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
     if (nums[i] + nums[j] == target) {
        cout << "Pair found: " << nums[i] << ", " << nums[j] << endl;
 }
 }
   }
}

int main() {
    int nums[] = {3,5,2,10,1,20};

    int length = sizeof(nums) / sizeof(nums[0]);

    int target = 12;
    
    findPairs(nums, length, target);
    
    return 0;
}
