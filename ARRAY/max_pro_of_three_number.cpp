#include <iostream>
#include <stdio.h>
using namespace std;

/*
problrm : maximum product of three numbers (leet code 628)
level : easy

approch : product of three number in sorted array
          max product will be 
          product1 = nums[0]*nums[1]*nums[n-1]  when array contains more than one negative values
          -> above product is (smaller*smaller*larger)
          product2 = nums[n-1]*nums[n-2]*nums[n-3]  when array contains larger positive values
          -> above product is (larger*larger*larger)
          and returning the max of avbove two products;

time complexity = O(nlogn);

date : 24/02/2026
*/


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int maxpro = 0;
       int n = nums.size();
        maxpro = max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
       return maxpro; 
    }
};