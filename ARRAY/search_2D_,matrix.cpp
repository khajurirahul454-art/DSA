#include <iostream>
#include <stdio.h>
using namespace std;

/*
problem = search a 2D matrix(leetcode 74)
level = medium

approch = for finding given target value in 2d matrix with codition of time complexity
          O(log(m*n)) i applied binary search
          -> firstly i applied binary search for row to find the exact row which having
             target value(applied this is because in the question they mentioned rows are in
             increasing order)
          -> later i applied binary serch for each colum to find the target value 
          -> at the end i returned true for if i found target
          -> else i returned false 

time complexity = O(log(m*n))
space complexity = O(1)

date = 01/03/2026
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int i = 0;
      int j = matrix.size()-1;
      
      while(i<=j){
        int mid = (i+j)/2;
        if(matrix[mid][0]<= target && matrix[mid][matrix[0].size()-1]>=target){
        int m = 0;
        int n = matrix[0].size()-1;
        while(m<=n){
            int cmid = (m+n)/2;
            if(matrix[mid][cmid]==target){
                return true;
            }else if(matrix[mid][cmid]>target){
                n = cmid-1;
            }else{
                m = cmid+1;
            }
        }return false;
        }else if(matrix[mid][0]>target){
            j = mid-1;
        }else{
            i = mid+1;
        }
      }
      return false;  
    }
};