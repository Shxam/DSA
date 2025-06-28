class Solution {
public:
    #include <iostream>
#include <vector>
#include <algorithm>

vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    // Prefix sum of nums
    vector<long long> prefix(n);
    prefix[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    vector<long long> answer;
    for (int q : queries) {
        // Number of elements <= q
        int idx = upper_bound(nums.begin(), nums.end(), q) - nums.begin();

        // Sum of left part
        long long left = (idx > 0) ? (1LL * q * idx - prefix[idx - 1]) : 0;

        // Sum of right part
        long long right = (idx < n) ? ((prefix[n - 1] - (idx > 0 ? prefix[idx - 1] : 0)) - 1LL * q * (n - idx)) : 0;

        answer.push_back(left + right);
    }

    return answer;
}

};