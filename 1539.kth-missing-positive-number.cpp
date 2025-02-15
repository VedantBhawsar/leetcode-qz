/*
 * @lc app=leetcode id=1539 lang=cpp
 *
 * [1539] Kth Missing Positive Number
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int left = 0, right = arr.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int missingCount = arr[mid] - (mid + 1); // Missing numbers up to index mid

            if (missingCount < k)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return left + k;
    }
};
// @lc code=end
