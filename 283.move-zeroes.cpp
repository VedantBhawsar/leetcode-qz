/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include <vector> 
using namespace std; 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int currentIndex = 0;  
        for(int i = 0; i<nums.size(); i++)  {
            if(nums[i] == 0)  {
                    count++;
            }
                else {
                    nums[currentIndex] =  nums[i];
                    currentIndex++; 
                }
            }   
            while(count >  0) {
                nums[currentIndex] = 0;  
                count--; 
                currentIndex++; 
            } 
    }
};
// @lc code=end

