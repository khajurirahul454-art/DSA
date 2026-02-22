
/*
problem : Two sum
link : https://leetcode.com/problems/pascals-triangle/description/

approch : ncr rule(combination logic)
          i.e : v[i][j]=v[i-1][j-1]+v[i-1][j]

time complexity : O(n^2);
space complexity : O(n^2);

date : 22/02/2026
*/

#include <iostream>
#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i= 0;i<numRows;i++){
            v.push_back(vector<int>(i+1));
            for(int j = 0;j<=i;j++){
                if(j==0||i==j){
                    v[i][j]=1;
                }else{
                    v[i][j]=v[i-1][j-1]+v[i-1][j];
                }
            }
        }
        return v;
    }
};
