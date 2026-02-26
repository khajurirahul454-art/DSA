#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = set_missmatch (leetcode 645);
level = easy

approch = firstly i sorted the array and later i applied condition for the finding
          duplicated value 
          ->later i applied the codition for finding the missing number in array 
          
time complexity = O(nlong)->sorting
date = 26/02/2026
*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector <int> ans;
        int duplicate = -1;
        int missing = -1;
        sort(nums.begin(),nums.end());
        for(int i = 1;i<nums.size();i++){
           if(nums[i] == nums[i-1]){
            duplicate = nums[i];
           }if(nums[i] > nums[i-1] + 1){
            missing = nums[i-1]+1;
           }
        }
        if(nums[0]!=1){
            missing = 1;
        }if(nums[nums.size()-1]!=nums.size()){
            missing = nums.size();
        }
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};