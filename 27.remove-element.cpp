/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> solution;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                solution.push_back(nums[i]);
            }
        }
        nums = solution;
        return solution.size();
    }
};
// @lc code=end
