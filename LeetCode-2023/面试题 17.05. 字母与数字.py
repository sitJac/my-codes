class Solution:
    def findLongestSubarray(self, array: List[str]) -> List[str]:
        prefixSums = list(accumulate((-1 if v[0].isdigit() else 1 for v in array), initial=0))
        left = right = 0
        first = {}
        for index, prefixSum in enumerate(prefixSums):
            it = first.get(prefixSum, -1)
            if it == -1:
                first[prefixSum] = index
            else:
                if index - it > right - left:
                    right = index
                    left = it
        return array[left:right]