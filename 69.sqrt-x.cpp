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
        // for (long long int  i = 1; i <= x; i++)
        // {
        //     if (i * i <= x)
        //     {
        //         ans = i;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }

        long long int s = 1, e = x;
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            if (mid * mid > x)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return e;
    }
};
// @lc code=end
