#include <iostream>
#include <stdio.h> 
using namespace std;

/*
problem = two sum II input array is sorted(leetcode 167)
level = medium 

approch = to solve this problem i used the binary search pattern and 
          ->firstly i creted a vector to return the posible pair 
          ->latter i applied the binary search and indexes of array which 
          satisfies the condition nums[i]+nums[j]==target
          ->finally i returned the vector

time complexity = O(logn)
space complexity = O(1)

date = 14/03/2026
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> v;
        int i =0;
        int j =numbers.size()-1;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            
            if(sum == target){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return {};
    }
};