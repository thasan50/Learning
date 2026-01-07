from typing import Optional
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # base case
        if not root:
            return root
        # nth case
        self.invertTree(root.left)
        self.invertTree(root.right)
        temp = root.left
        root.left = root.right
        root.right = temp
        return root

        
        # So my idea for inverting this is by just swapping the left and right nodes as you go down the tree. Could I have an array of pointers?
        # I think I need like recursion for this. Actually, I remember getting a similar problem that I solved without recursion. Fibonacci, right? Something we could apply here too? Bruh, recursion is kinda like induction proof