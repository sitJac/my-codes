/*
 * @lc app=leetcode.cn id=30 lang=java
 *
 * [30] 串联所有单词的子串
 */

// @lc code=start
class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        
        List<Integer> res = new ArrayList<Integer>();
        if (words.length == 0) return res;
        int wl = words[0].length();
        int wc = words.length;
        int win = wc * wl; 
        
        Map<String,Integer> map1 = new HashMap<String,Integer>();
        for (String w:words) {
            if (map1.get(w)==null) map1.put(w,0);
            map1.put(w, map1.get(w)+1);
        }
        
        int[] wordNums = new int[map1.size()];
        int i = 0;
        for (Integer n:map1.values()) {
            wordNums[i] = n;
            i++;
        }
        
        int[] f=new int[s.length()];
        int wn=1;
        for(String w:map1.keySet()) {
            int index = -2;
            while(index != -1) {
                if (index == -2) index=-1;
                index = s.indexOf(w, index+1);
                if (index >=0) f[index] = wn;
            }
            wn++;
        }
        
        int[] wordNumsWin = new int[map1.size()];
        for (int j=0;j+win<=s.length();j++) {
            while(f[j]==0) {
                j++;
                if(j+win>s.length()) return res;
            }
            int k=j;
            while(k<j+win) {
                if(f[k] != 0) {
                    wordNumsWin[f[k]-1]++;
                    if (wordNumsWin[f[k]-1] > wordNums[f[k]-1]) break;
                }else break;
                k+=wl;
            }
            if (k==j+win) {
                //compare
                int mm=0;
                for (;mm<map1.size();mm++) {
                    if (wordNumsWin[mm] != wordNums[mm]) break;
                }
                if (mm==map1.size()) res.add(j);
            }
            // clean the wordNumsWin
            for (int mm=0;mm<map1.size();mm++) wordNumsWin[mm] = 0;
        }
        
        return res;
    }
}
// @lc code=end

