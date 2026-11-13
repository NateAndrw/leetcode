// Problem:    1. Two Sum
// Link:       https://leetcode.com/problems/two-sum/
// Approach:   Brute force (check every pair)
// Complexity: Time O(n^2), Space O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

static void test(vector<int> nums, int target) {
    Solution s;
    vector<int> r = s.twoSum(nums, target);
    cout << "target " << target << " -> ";
    if (r.size() == 2) cout << "[" << r[0] << ", " << r[1] << "]";
    else cout << "no answer";
    cout << "\n";
}

int main() {
    test({2, 7, 11, 15}, 9);  // expect [0, 1]
    test({3, 2, 4}, 6);       // expect [1, 2]
    test({3, 3}, 6);          // expect [0, 1]
    return 0;
}
