// Problem:    1. Two Sum
// Link:       https://leetcode.com/problems/two-sum/
// Approach:   One-pass hash map (number -> index)
// Complexity: Time O(n), Space O(n)

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // number -> index
        for (int i = 0; i < (int)nums.size(); i++) {
            int complement = target - nums[i];
            // Check BEFORE inserting so an element is never paired with itself.
            auto it = seen.find(complement);
            if (it != seen.end()) {
                return {it->second, i};
            }
            seen[nums[i]] = i;
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
