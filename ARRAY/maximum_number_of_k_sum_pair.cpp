#include <iostream> 
#include <stdio.h>
using namespace std;

/*
problem = maximum number of k sum pair(leetcode 1679)
level = medium

approch = to solve this problem firstly i sorted the vector and initilized variable 
          int count with 0
          -> i applied the two point approch for solving this problem 
          -> counted the each time whenever the condition nums[i]+nums[j]==k
          finally i returned the count at the end

time complexity = O(nlogn)
space complexity = O(1)

Date = 08/03/2026
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int i =0;
        int j =nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum == k){
                count +=1;
                i++;
                j--;
            }else if(sum>k){
                j--;
            }else{
                i++;
            }
        }
       return count;
    }
};