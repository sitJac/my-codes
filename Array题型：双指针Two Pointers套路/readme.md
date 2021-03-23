
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
Leetcode No.344 反转字符串

> 编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
> 
> 不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。 你可以假设数组中的所有字符都是 ASCII
> 码表中的可打印字符。
> 
> 示例 1： 输入：["h","e","l","l","o"] 输出：["o","l","l","e","h"]
> 
> 示例 2： 输入：["H","a","n","n","a","h"] 输出：["h","a","n","n","a","H"]
