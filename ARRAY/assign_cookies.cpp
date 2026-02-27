#include <iostream> 
#include <stdio.h>
using namespace std;

/*
problem = assign cookies (leetcode 455)
level = easy 

approch = firstly sorted the both the vectors to compaire them easily 
          when they given codition s[j]>=g[i] i counted no of times the codition 
          statishfied and also I increased j++ and i++ to compair next indeces
          else I incresed only j++ to get satisfying codition at the end return 
          the count

time complexity = (nlogn+mlogm)(for sorting the s and g)
space complexity = O(1) i didn't use ant extra space

date = 27/02/2026
*/


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int n1 = 0;
        int n2 = 0;
        while(n1<g.size() && n2<s.size()){
            if(s[n2]>=g[n1]){
                count +=1;
                n2++;
                n1++;
            }else{
                n2++;
            }
        }
        return count;
    } 
};