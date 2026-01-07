from typing import List

class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        # Base case
        if sr < 0 or sr >= len(image) or sc < 0 or sc >= len(image[sr]):
            return image
        if image[sr][sc] == color:
            return image
        # Next case
        temp = image[sr][sc]
        image[sr][sc] = color
        if sr-1 >= 0 and temp == image[sr-1][sc]:
            image = self.floodFill(image, sr-1, sc, color)
        if sc-1 >= 0 and temp == image[sr][sc-1]:
            image = self.floodFill(image, sr, sc-1, color)
        if sr+1 < len(image) and temp == image[sr+1][sc]:
            image = self.floodFill(image, sr+1, sc, color)
        if sc+1 < len(image[sr]) and temp == image[sr][sc+1]:
            image = self.floodFill(image, sr, sc+1, color)
        return image
        # Only pixels that have the same original color as the source pixel can change. Only pixels that are directly adjacent to modified pixels can change. At most 50x50 grid. Isn't this kind of like the inverted binary tree problem? Recursion
        # Hahaha, this one took a while. Proud of it
    
        