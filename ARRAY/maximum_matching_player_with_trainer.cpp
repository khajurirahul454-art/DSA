#include <iostream> 
#include <stdio.h>
using namespace std;

/*
problem = maximum matching player with trainer (leetcode 2410)
level = medium

approch = firstly sorted the both the vectors to compaire them easily 
          when they given codition trainers[j]>=players[i] i counted no of times the codition 
          statishfied and also I increased j++ and i++ to compair next indeces
          else I incresed only j++ to get satisfying codition at the end return 
          the count

time complexity = (nlogn+mlogm)(for sorting the s and g)
space complexity = O(1) i didn't use ant extra space

**this is similar problem like assign_cookies**

date = 27/02/2026
*/

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count = 0;
        int i1 =0,i2 =0;
        while(i1<players.size()&&i2<trainers.size()){
            if(trainers[i2]>=players[i1]){
                count+=1;
                i1++;
                i2++;
            }else{
                i2++;
            }
        }
        return count;
    }
};