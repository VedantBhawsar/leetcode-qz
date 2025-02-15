/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */
#include <vector>
#include <math.h>
#include <iostream>
#include <climits>
using namespace std;

// @lc code=start
class Solution
{
public:
    long long int  findMaxi(vector<int> x)
    {
        long long int maxi = INT_MIN;
        for (long long int i = 0; i < x.size(); i++)
        {
            if (x[i] > maxi)
                maxi = x[i];
        }
        return maxi;
    }
    // hourlu eating capactiy
    long long int calculateTotalHours(vector<int> &arr, long long int hourly)
    {
        long long int totalH = 0;
        for (long long int i = 0; i < arr.size(); i++)
        {
            totalH += ceil((double)arr[i] / (double)hourly);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int> &piles, long long int h)
    {
        long long int s = 1, e = findMaxi(piles);
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            long long int totalH = calculateTotalHours(piles, mid);
            if (totalH <= h)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return s;
    }
};
// @lc code=end
