#include <iostream>
#include <vector>

int findPeakElement(const std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    //std::vector<int> nums = {1, 2, 3, 1};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    int peakIndex = findPeakElement(nums);
    std::cout  << peakIndex << std::endl;

    return 0;
}

