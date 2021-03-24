

Array题目中常用的双指针（two pointers）方法可以用来解决一系列常见的array题目。

### 双指针 Two Pointers
使用两个index pointers操作数组，一个array被分成三个区域：[0,i),[i,j),[j,array.Length)
 
#### 同向双指针

同向双指针的解题步骤如下：
> 1.  Initialize two pointers i and j, usually both equal to 0
> 2.  while j < array.length:
>     -   if we need array[j], then we keep it by assigning array[i] = array[j], and move i forward, make it ready at the next position
>     -   otherwise skip it. We do not need to move i since its spot is not fulfilled

#### 反向双指针

 反向双指针的解题步骤如下：
> 1.  Initialize two pointers i = 0, j = array.length – 1
> 2.  while i <= j:
>     -   Decide what you should do based on the value of array[i] and array[j]
>     -   Move at least one pointer forward in its direction

### 实际应用
[LeetCode No.344 反转字符串](https://leetcode-cn.com/problems/reverse-string/)

> 编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
> 不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。 你可以假设数组中的所有字符都是 ASCII
> 码表中的可打印字符。
> 
> 示例 1：  
> 输入：["h","e","l","l","o"]  
> 输出：["o","l","l","e","h"]
> 
> 示例 2：  
> 输入：["H","a","n","n","a","h"]  
> 输出：["h","a","n","n","a","H"]

[LeetCode No.26 删除有序数组中的重复项](https://leetcode-cn.com/problems/remove-element/)

> 给你一个有序数组nums，请你原地删除重复出现的元素，使每个元素 只出现一次，返回删除后数组的新长度。
> 不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
> 
> 示例 1：   
> 输入：nums = [1,1,2]  
> 输出：2, nums = [1,2]  
> 解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。不需要考虑数组中超出新长度后面的元素。
> 
> 示例 2：   
> 输入：nums = [0,0,1,1,1,2,2,3,3,4]  
> 输出：5, nums = [0,1,2,3,4]    
> 解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。不需要考虑数组中超出新长度后面的元素。

[LeetCode No.11 盛最多水的容器](https://leetcode-cn.com/problems/container-with-most-water/)

> 给你n个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai)。在坐标内画n条垂直线，垂直线i 的两个端点分别为(i, ai)和(i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

> 
> 示例 1： 
> 输入：[1,8,6,2,5,4,8,3,7]   
> 输出：49      
> 解释：图中垂直线代表输入数组[1,8,6,2,5,4,8,3,7]。在此情况下，容器能够容纳水（表示为蓝色部分）的最大值为 49。 
![盛水最多的容器][1]

> 示例 2：
> 输入：height = [1,1] 
> 输出：1 

> 示例 3：
> 输入：height = [4,3,2,1,4] 
> 输出：16 

> 示例 4：
> 输入：height = [1,2,1] 
> 输出：2

  [1]: https://aliyun-lc-upload.oss-cn-hangzhou.aliyuncs.com/aliyun-lc-upload/uploads/2018/07/25/question_11.jpg
