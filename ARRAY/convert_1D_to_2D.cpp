#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = convert 1D to 2D(leetcode 2022)
level = easy 

approch = converted 1D to 2D(with r rows,c column) by using divider and modulus 
          rule.
          row = i/columns 
          col = i%columns
          finally i returned the 2D matrix

time complexity = O(n)
space complexity = O(n) n all the element in 1D matrix

date = 28/02/2026
*/

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result(m,vector <int>(n,0));
        if(original.size()!=m*n){
            return {};
        }
        int r = 0, c = 0;
        for(int i = 0;i<original.size();i++){
            r = i/n;
            c = i%n;
            result[r][c]=original[i];
        }
        return result;
    }
};

