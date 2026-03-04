#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = check if grid satisfies the condition(leetcode 3142)
level = easy

approch = firstly i loop for checking the each condition for each element in 2D 
          array and also applied the condition like i+1<m and j+1<n for avoiding error
          by last row and column element

time complexity = O(m*n)
space complexity = O(1)

date = 04/03/2026
*/

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i+1<m && grid[i][j] != grid[i + 1][j]){
                    return false;
                }if(j+1<n && grid[i][j] == grid[i][j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};