#include <iostream>
#include <stdio.h> 
using namespace std;

/*
problem = find subarray with equal sum(leetcode 2395)
level = easy

approch = to solve this proble i first created a vector of all the adjecent posible sums 
          later i sorte the newly created vector and compared the adjecent value to 
          check whether they are similar or not 
          ->if they are similar i returned true 
          ->otherwise i returned false

time complexity = O(nlogn)
space complexity = O(n)

date 10/03/2026
*/

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
      int n = nums.size();
      vector <int> result;
      for(int i = 0;i<n-1;i++){
        int sum = nums[i]+nums[i+1];
        result.push_back(sum);
      }
      sort(result.begin(),result.end());
      int m = result.size();
      for(int i =0;i<m-1;i++){
        if(result[i]==result[i+1]){
            return true;
        }
      }
      return false;
    }
};