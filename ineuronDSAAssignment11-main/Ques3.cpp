#include <iostream>
#include <vector>

int missingNumber(const std::vector<int>& nums) {
    int n = nums.size();
    int missing = n;

    for (int i = 0; i < n; i++) {
        missing ^= i ^ nums[i];
    }

    return missing;
}

int main() {
    //std::vector<int> nums = {3, 0, 1};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int missingNum = missingNumber(nums);
    std::cout  << missingNum << std::endl;

    return 0;
}

