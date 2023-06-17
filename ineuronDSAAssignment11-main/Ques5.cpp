#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set(nums1.begin(), nums1.end());
    std::vector<int> intersection;

    for (int num : nums2) {
        if (set.count(num)) {
            intersection.push_back(num);
            set.erase(num);
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
    std::vector<int> result = intersection(nums1, nums2);

    //std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

