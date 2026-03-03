#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = maximum product of three number after one replacement(leet code 3732)
level = medium 

approch = i starting actually i tried find absolute product of two largest number in given vector 
          then after getting maximum of product, to get the maximum product after one
          replacement i multiplied the maximum product with 100000(this is range is mentioned
          in the question)
          -> at the end i returned the maximum product*100000

time complexity = O(nlogn)
space complexity = O(1)

date = 03/03/2026
*/

class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = 0;
        int n = nums.size();
        long long c1 = abs(1LL*nums[0]*nums[1]);
        long long c2 = abs(1LL*nums[n-2]*nums[n-1]);
        long long c3 = max(c1,c2);
        long long c4 = max(c3,abs((long long)nums[0]*nums[n-1]));
        return c4*100000;
    }
};