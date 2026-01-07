class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in range(len(s)):
            if s[i] == '(':
                stack.append(')')
            elif s[i] == '[':
                stack.append(']')
            elif s[i] == '{':
                stack.append('}')
            else:
                if not stack:
                    return False
                temp = stack.pop()
                if s[i] != temp:
                    return False
        if not stack:
            return True
        return False
        # I think I can use a queue or stack or whatever it's called. Meaning, if the character ( is in the input string, I'd add ) into the data structure at the end, and then if I come across a [ I'd add ] on top of that. Then as I go through the string, if the character does not match (, [, { I will pop off the last added thing from the data structure, and if it matches, I keep going, If no match, return false. Ok, apparently it's called a stack, so let's just implement that with a list.
        # I changed two lines and it made my runtime go from beats 13% to beats 100% bro. DO NOT do if len(stack) > 0 if you want to check the last case, just use if not stack cause apparently that is so much faster.

        