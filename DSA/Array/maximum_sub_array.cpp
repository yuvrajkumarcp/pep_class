#include <iostream>
#include <climits>

int maxSubArraySum(int nums[], int length) {
    int max_so_far = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < length; ++i) {
        current_sum = std::max(nums[i], current_sum + nums[i]);
        max_so_far = std::max(max_so_far, current_sum);
    }

    return max_so_far;
}

int main() {
    int nums[] = {1, -3, 2, 1, -1, 3, -2, 3};
    int length = sizeof(nums) / sizeof(nums[0]);

    int max_sum = maxSubArraySum(nums, length);

    std::cout << "Maximum subarray sum is: " << max_sum << std::endl;

    return 0;
}
