#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = find the duplicated value(leetcode 287)
level = medium

approch = for finding duplicated value in given vector i applied a for loop and
          compared current value with previous value by using condition and finally 
          i returned the duplicted value 

time complexity = O(n)
space complexity =O(1)

date = 02/03/2026
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int repeated;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                repeated = nums[i];
                break;
            }
        }
        return repeated;
    }
};