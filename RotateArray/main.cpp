#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;  // In case k is larger than n
    
    // Step 1: Reverse the entire array
    reverse(nums.begin(), nums.end());
    
    // Step 2: Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);
    
    // Step 3: Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    // Output the rotated array
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
};