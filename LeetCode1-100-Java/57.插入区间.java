/*
 * @lc app=leetcode.cn id=57 lang=java
 *
 * [57] 插入区间
 */

// @lc code=start
class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        /*对数组进行排序，第一位从小到大，第二位从小到大*/
        Integer[][] Integers = new Integer[intervals.length+1][2];
        for (int i = 0; i < intervals.length; i++) {
            Integers[i][0]=intervals[i][0];
            Integers[i][1]=intervals[i][1];
        }

        //加入要添加的数组
        Integers[Integers.length-1][0]=newInterval[0];
        Integers[Integers.length-1][1]=newInterval[1];

        Arrays.sort(Integers,(x, y)-> {
            if(x[0].equals(y[0])) return x[1]-y[1];
            return x[0] - y[0];
        });
        /*定义list集合存储结果*/
        List<int[]> list = new ArrayList<>();
        /*初始数组设为第一位*/
        int[] pre = new int[2];
        pre[0] = Integers[0][0];
        pre[1] = Integers[0][1];
        for (int i = 1; i < Integers.length; ) {
            //如果当前位数组的左端点小于等于pre数组右端点，说明有连续，可以进行合并
            if(Integers[i][0]<=pre[1]){
                //如果当前数组的右端点小于等于pre数组右端点，说明重合，直接跳过
                if(Integers[i][1]<=pre[1]) {
                    i++;
                }
                //否则将更新当前数组的右端点
                else pre[1]=Integers[i][1];
            }
            //如果当前数组的左端点大于pre数组右端点，即出现断层，直接将当前数组加入结果集合，并重置当前数组
            else {
                list.add(pre);
                pre = new int[2];
                pre[0]= Integers[i][0];
                pre[1]= Integers[i][1];
                i++;
            }
        }
        list.add(pre);
        int[][] res= new int[list.size()][2];
        for (int i = 0; i < list.size(); i++) {
            res[i][0]=list.get(i)[0];
            res[i][1]=list.get(i)[1];
        }
        return res;
    }
}
// @lc code=end

