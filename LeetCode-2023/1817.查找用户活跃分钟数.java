/*
 * @lc app=leetcode.cn id=1817 lang=java
 *
 * [1817] 查找用户活跃分钟数
 */

// @lc code=start
class Solution {
    public int[] findingUsersActiveMinutes(int[][] logs, int k) {
        Map<Integer, Set<Integer>> activeMinutes = new HashMap<Integer, Set<Integer>>();
        for(int[] log : logs) {
            int id = log[0];
            int time = log[1];
            activeMinutes.putIfAbsent(id, new HashSet<Integer>());
            activeMinutes.get(id).add(time);
        }
        int[] answer = new int[k];
        for(Set<Integer> minutes : activeMinutes.values()) {
            int activeCount = minutes.size();
            answer[activeCount - 1]++;
        }
        return answer;
    }
}
// @lc code=end

