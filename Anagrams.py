class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        a = collections.defaultdict(list)
        for s in strs:
            t = tuple(sorted(s))
            a[t].append(s)
        return [a[k] for k in a]
