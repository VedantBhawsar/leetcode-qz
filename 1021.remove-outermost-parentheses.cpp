/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
#include <string.h>
using namespace std;
#include <iostream>
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int count = 0;
        string solution = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                if (count > 0)
                {
                    solution += "(";
                }
                count++;
            }
            else
            {
                count--;
                if (count > 0)
                {
                    solution += ")";
                }
            }
        }
        return solution;
    }
};
// @lc code=end
