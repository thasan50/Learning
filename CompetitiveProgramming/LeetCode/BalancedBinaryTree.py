from typing import Optional
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        dup = root
        while dup.right is not None:
            
            while dup.left is not None:

                

        # How to determine if something is height balanced? If the depth of one subtree is more than 1 different from its neighbor. So root node checks depth of left and right, left checks depth, right checks left and right, left checks left and right, repeating stuff.
        