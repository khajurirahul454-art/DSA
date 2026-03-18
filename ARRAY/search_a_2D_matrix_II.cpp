#include <iostream> 
#include <stdio.h> 
using namespace std;

/*
problem = searching a 2D matrix II (leetcode 240)
level = medium 

approch :
         pattern = used different pattern than which is applied to solve the seach a 2D 
                  matrix 
                  -> i.e  i applied the while loop such as i stated traversing from 
                    first last of row to until i get target == matrix[i][j]
                    if i not got i incresed the i++ to move in to the next row
         technique = greedy technique

time complexity = O(m+n)
space complexity = O(1)

date = 18/03/2026
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int i = 0;
       int j = matrix[0].size()-1;
       int n = matrix.size();
       while(i<n && j>= 0){
        if(matrix[i][j]==target){
            return true;
        }else if(matrix[i][j]>target){
            j--;
        }else{
            i++;
        }
       }
        return false;
    }
};