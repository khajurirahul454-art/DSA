#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = counting a pair whose sum is less than the target(leetcode 2824)
level = easy 

approch = i created a vector for storing paired element inside it
          -> i used nested for loop to access all the posible pair 
          -> and i applied the if condition which satisfies the 
            nums[i]+nums[j]<target and 0<i<j<n
          -> and push_backed the codition passed i and j paired element to result vector
          -> finally i returned the size of the restult array

time complexity = O(n^2)
space complexity = O(n^2)

date = 07/03/2026
*/

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        vector <pair<int,int>> result;
        for(int i = 0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(i<j && nums[i]+nums[j]<target){
                    result.push_back({i,j});
                }
            }
        }
        int n = result.size();
        return n;
    }
};