/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=star
#include <math.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(long long int x)
    {
        long long int ans = 0;
        for (long long int  i = 1; i <= x; i++)
        {
            if (i * i <= x)
            {
                ans = i;
            }
            else
            {
                break;
            }
        }
        return ceil(ans);
    }
};
// @lc code=end
