#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = reshape(leetcode 566)
level = easy 

approch = firsly i converted given 2D matrix to 1D matrix by using row major mapping
          formula (i.e m[i][j]=m[i*n+j]),
          later i converted 1D to 2D(with r rows,c column) by using divider and modulus 
          rule.
          finally i wrote the 2D matrix

time complexity = O(m*n)
space complexity = O(m*n) m*n = N => all the element in matrix

date = 28/02/2026
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        vector <int> mtx;
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
               mtx.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> m2(r,vector<int>(c,0));
        int row,cou;
        for(int i = 0;i<mtx.size();i++){
            row = i/c;
            cou = i%c;
            m2[row][cou] = mtx[i];
        }
    return m2;
    }
};