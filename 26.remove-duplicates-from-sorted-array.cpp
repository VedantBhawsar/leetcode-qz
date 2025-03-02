/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 0;
        map<int, int> mpp;
        vector<int> solution;
        int recentNums;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != recentNums)
            {
                solution.push_back(nums[i]);
                recentNums = nums[i];
            }
        }
        nums = solution;
        return solution.size();
    }
};
// @lc code=end
