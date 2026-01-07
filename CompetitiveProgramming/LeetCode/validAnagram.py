class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sir = {}
        tir = {}
        if len(t) != len(t):
            return False
        for c in s:
            if c in sir:
                sir[c] += 1
            else:
                sir[c] = 1
        for c in t:
            if c in tir:
                tir[c] += 1
            else:
                tir[c] = 1
        return sir == tir

                # My instinct was to sort this, and then see if they're equal. Super slow, don't do it. Beats 15%. My next try with hashmap only beat 23%? I'm missing something. Next try beats 74%. I removed those two loops at the end I was using to manually check the dictionaries and just set them equal. I also changed some of the logic I was using to reference characters (stopped using indices)
        # first = sorted(s)
        # second = sorted(t)
        # x = len(first)
        # if x != len(second):
        #     return False
        # else:
        #     for i in range(x):
        #         if first[i] != second[i]:
        #             return False
        #     return True