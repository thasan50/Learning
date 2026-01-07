from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left_pointer = 0
        right_pointer = len(nums) - 1
        center = (left_pointer+right_pointer)//2
        while left_pointer < right_pointer:
            if nums[center] == target:
                return center
            elif nums[center] > target:
                right_pointer = center -1
            else:
                left_pointer = center + 1
            center = (left_pointer+right_pointer)//2
        if nums[center] == target:
            return center
        else:
            return -1
        # Needed help because I was trying to start with moving the center first.
        # What I should have done is moved pointers representing the subinterval of the array to then change the center. I touched on that idea with my second attempt, but it was by modifying the array to become smaller and smaller subintervals directly, which did not give me the right index to work with.



        # So this is what I have right now. The problem is that I'm supposed to find an index, but by creating new interval lists, the indices are completely different. I want something that does what this does without actually tampering with the array length.
        # length = len(nums)
        # if length % 2 == 0:
        #     center = len(nums) // 2 - 1
        # else:
        #     center = len(nums) // 2
        # interval = nums
        # while len(interval) > 1:
        #     if interval[center] == target:
        #         return center
        #     elif interval[center] > target:
        #         interval = interval[center+1:]
        #         if len(interval) % 2 == 0:
        #             center = len(interval) // 2 - 1
        #         else:
        #             center = len(interval) // 2
        #     else:
        #         interval = interval[:center]
        #         if len(interval) % 2 == 0:
        #             center = len(interval) // 2 - 1
        #         else:
        #             center = len(interval) // 2
        # if interval[0] == target:
        #     return
        # else:
        #     return -1
        
        # pos = 0
        # increment = 0
        # x = len(nums)
        # if x % 2 == 0:
        #     pos = x//2 - 1
        # else:
        #     pos = x//2
        # increment = pos
        # while increment > 0:
        #     increment = increment // 2 
        #     if nums[pos] > target:
        #         pos += increment
        #     else:
        #         pos -= increment
        # if nums[pos] == target:
        #     return pos
        # return -1