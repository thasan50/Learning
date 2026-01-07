class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        forward = []
        for c in s:
            if c.isalnum():
                forward.append(c)
        f = "".join(forward)
        end = len(f) - 1
        for i in range(len(f)):
            if f[i] != f[end]:
                return False
            end -= 1
        return True