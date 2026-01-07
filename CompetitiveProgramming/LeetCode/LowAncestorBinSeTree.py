# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        dup = root
        # Base case
        if not dup:
            return None
        elif dup == p or dup == q:
            return dup
        # Recursive case
        l = self.lowestCommonAncestor(dup.left, p, q)
        r = self.lowestCommonAncestor(dup.right, p, q)
        if l is not None and r is not None:
            return dup
        elif l is not None:
            return l
        elif r is not None:
            return r
        else:
            return None
            # So the function ended up being a lot less complicated than I first started with. Call the function on left and right nodes to search the tree. If you run into a p or q value, then immediately return that (if the complement is beneath it, then you already found your ancestor). If you run into None, then just return None. And supposing you have both p and q from your left and right nodes, just return the current node where they meet up at. You don't need a special tag to indicate ancestor or something, just don't return useless information. None vs Something. Use "if x is not None:" instead of "if x:", took my runtime from beats 5% to beats 40%. Actually nvm, that was just leetcode tweaking. 
            # For something similar, take advantage of the fact that it's a binary search tree. This actually ordered.

            # Problem with this idea, how would I know when I'm actually returning the ancestor? If I don't get a p or q, it won't return anything. Recursive, after all.
        # How would we go about finding something like this? I don't know what level p and q are in the linked list. I assume p, q, and root are already connected in the same linked list, and I don't need to search for them from root using p.val and q.val? But I might actually need to do that.
        # Keep going left until you find something. If nothing, go back and just check branches until you find either p or q. Then record an ancestor node. But I don't think you can do that? I can return one TreeNode but that's probably just the node I was on, you know? 
        # Recursion, but I need a way to store that ancestor node. How?

