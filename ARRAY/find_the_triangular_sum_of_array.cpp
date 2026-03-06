#include <iostream>
#include <stdio.h> 
using namespace std;

/*
problem = find the triangular sum of an array(leetcode 2221)
level = medium

approch = firstly i checked the no of element in array 
          -> if size is 1 direcly returned answer as numw[0]
          -> else i applied the while loop to track the new array with number of elements 
          -> then created a temporary array of size 1 less then size of nums
          -> applied for loop inside the while loop to updated the temperary with values 
             (nums[i]+nums[i+1])%10
          -> after the for loop i assigned temporary as nums again to carry the while 
             loop until condition become false
          -> at the end i returned nums[0](sum of triangular array)

time complexity = O(n^2)
space complexity = O(n)

date = 06/03/2026
*/

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int *p[n];
        while(n>1){
            vector <int> temp(n-1);
            for(int i = 0;i<n-1;i++){
                temp[i] = (nums[i]+nums[i+1])%10;
            }
            nums = temp;
            n = n-1;
        }
        return nums[0];
    }
};