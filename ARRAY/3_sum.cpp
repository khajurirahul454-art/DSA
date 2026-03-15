#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = 3 sum (leetcode 16)
level = medium

approch:
    pattern = 2 sum 
    technique = sort + two point technique 
    explaination = firstly i sorted the array to fix the one of the value(i.e i)
    and applied the two point approch to find the j amd k th value finally i returned 
    vector of vector which satisfies the condition 
    nums[i]+nums[j]+nums[k]==0

time complexity = O(n^2)
space complexity = O(1)

date = 15/03/2026
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(sum>0){
                    k--;
                }else{
                    j++;
                }          
            }
        }
        set<vector<int>> s(v.begin(),v.end());
        v.assign(s.begin(),s.end());
        return v;
    }
};