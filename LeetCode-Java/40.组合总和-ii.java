import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/*
 * @lc app=leetcode.cn id=40 lang=java
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
    List<List<Integer>> list=new ArrayList<>();
    List<Integer> path=new ArrayList<>();
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        dfs(candidates,target,0);
        return list;
    }
    private void dfs(int[] candidates, int target,int index){
        if(target==0){
            list.add(new ArrayList<>(path));
            return;
        }
        for(int i=index;i<candidates.length;i++){
            if(candidates[i]<=target){
                if(i>index&&candidates[i]==candidates[i-1]){
                    continue;
                }
                path.add(candidates[i]);
                dfs(candidates,target-candidates[i],i+1);
                path.remove(path.size()-1);
            }
        }
    }
}
// @lc code=end

