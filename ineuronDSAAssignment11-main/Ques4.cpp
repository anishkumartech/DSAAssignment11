#include <iostream>
#include <vector>

int findDuplicate(const std::vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Move slow and fast pointers until they meet
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Reset slow pointer to the first element
    slow = nums[0];

    // Move slow and fast pointers until they meet again
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    //std::vector<int> nums = {1, 3, 4, 2, 2};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int repeatedNum = findDuplicate(nums);
    std::cout   << repeatedNum << std::endl;

    return 0;
}

