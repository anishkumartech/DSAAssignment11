#include <iostream>

int mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    int left = 0;
    int right = x;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long mid_squared = static_cast<long long>(mid) * mid;

        if (mid_squared == x) {
            return mid;
        } else if (mid_squared > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return right;
}

int main() {
    int n;
    std::cin>>n;
    std::cout << mySqrt(n) << std::endl;  // Output: 2

    return 0;
}

