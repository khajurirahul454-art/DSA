#include <iostream>
#include <stdio.h> 
using namespace std;

/*
problem = best time to buy and sell the stock (leetcode 121)
level = easy

approch = to solve this problem i defined integer variable maxprofit and initialized 
         with 0
         ->considered all day as selling day except first because first day considered
           as buying day
         -> then applied the for loop to find maximum profit like before selling the 
            stock on day i see the profit is there any profit i am willing to sell it
            otherwise i only update the buying day
        -> i mean every time i check for profit + best buty
        -> i applied condition only for profit to sell the stock on best day 
        otherwise i update only bestbuy

time complexity = O(n)
space complexity = O(1)

date = 11/03/2026
*/
class Solution {
public:
    int maxProfit(vector<int>& prices){
      int maxprofit = 0;
      int bestbuy = prices[0];
      for(int i=1;i<prices.size();i++){
        if(prices[i]>bestbuy){
            maxprofit = max(maxprofit,prices[i]-bestbuy);
        }
        bestbuy = min(bestbuy,prices[i]);
      }
      return maxprofit;
    }
};