#include <iostream>
#include <vector>

std::vector<int> searchRange(const std::vector<int>& nums, int target) {
    int start = -1;
    int end = -1;

    // Find leftmost occurrence of the target
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            start = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Find rightmost occurrence of the target
    left = 0;
    right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            end = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return {start, end};
}

int main() {
    //std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int target ;
    std::cin>>target;
    std::vector<int> result = searchRange(nums, target);

    std::cout << "Range: [" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}

