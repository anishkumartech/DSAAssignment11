#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> intersect(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_map<int, int> freqMap;

    for (int num : nums1) {
        freqMap[num]++;
    }

    std::vector<int> intersection;

    for (int num : nums2) {
        if (freqMap.count(num) && freqMap[num] > 0) {
            intersection.push_back(num);
            freqMap[num]--;
        }
    }

    return intersection;
}

int main() {
    //std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums1;
    int num;
    while (std::cin >> num) {
        nums1.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    //std::vector<int> nums2 = {2, 2};
    std::vector<int> nums2;

    while (std::cin >> num) {
        nums2.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    std::vector<int> result = intersect(nums1, nums2);


    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

