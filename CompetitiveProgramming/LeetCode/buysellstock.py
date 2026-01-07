from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        lowest_price = 100000 #greater than price constraint
        for i in range(len(prices)):
            lowest_price = min(lowest_price, prices[i])
            profit = max(profit, prices[i] - lowest_price)
        return profit
    # Double loop is far too slow
    # How can I do this in one loop? Do you remember prefix sums? Maybe something like that?
    # Just keep track of the lowest price so far, and then go through the list and check profit of that lowest price against the stuff that comes after