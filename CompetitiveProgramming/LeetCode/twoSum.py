from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in num_map:
                return [num_map[complement], i]
            num_map[nums[i]] = i
        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if nums[i] + nums[j] == target:
        #             return [i, j]
# Optimal solution involves hash map. How does it work?
# The idea is that you find the complement of the current number you're on, check if the complement is already in your hashmap, and add it in if it's not. Checking hashmap is O(1) operation because of the way it works *don't have time to figure out right now*, just accept it.

if __name__ == "__main__":
    sol = Solution()
    nums = [2, 7, 11, 15]
    target = 9
    result = sol.twoSum(nums, target)
    print(result)

