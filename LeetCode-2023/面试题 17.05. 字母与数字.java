class Solution {
    public String[] findLongestSubarray(String[] array) {
        int n = array.length;
        int[] s = new int[n + 1];
        s[0] = 0;
        for(int i = 0; i < n; i++) {
            s[i + 1] = s[i] + (array[i].charAt(0) >> 6 & 1) * 2 - 1;
        }
        int left = 0, right = 0;
        HashMap<Integer, Integer> first = new HashMap<Integer, Integer>();
        for(int i = 0; i < n + 1; i++) {
            var it = first.get(s[i]);
            if(it == null) {
                first.put(s[i], i);
            } else {
                if(i - first.get(s[i]) > right - left) {
                    right = i;
                    left = first.get(s[i]);
                }
            }
        }
        return Arrays.copyOfRange(array, left, right);
    }
}