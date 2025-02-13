/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        // [1,2,1,3,5,6,4]
        int left = 0, right = nums.size() - 1;
    
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                // Peak is on the left side or at mid
                right = mid;
            } else {
                // Peak is on the right side
                left = mid + 1;
            }
        }
        
        return left; 
    }
};
// @lc code=end
