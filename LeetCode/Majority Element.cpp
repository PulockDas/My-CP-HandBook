// Leetcode Problem Link: https://leetcode.com/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, count=0;
        for(auto num: nums) {
            if(!count) candidate = num;
            count += (num == candidate) ? 1: -1;
        }
        return candidate;
    }
};

// Moore's Voting Algorithm