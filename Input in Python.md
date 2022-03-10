<h2>OJ多行输入问题-Python3</h2>

## input()与sys.stdin概述
在线判题系统（Online Judge）的多行输入问题分为定行输入与不定行输入。
若为定行输入，使用循环+input()即可解决。
若为不定行输入，还要看是否有输入结束的标志。

若不定行输入带结束标志，最简单的方法，使用while循环加结束判断语句即可。
若不定行输入不带结束标志，我们应当使用系统输入sys.stdin较为方便，也可使用其他方法。

这里要注意一点，不定行输入不带结束标志问题，在本地IDE上测试时，输入是自己定义的，输入结束你可以疯狂按回车键，如果你通过判断输入是否为空作为跳出循环的判断语句，你的代码可能可以运行正确，但是在OJ里这种判断方法是错误的，是不可取的。

### 不定行输入有结束标志示例
> 题目描述 计算a+b
> 
> 输入描述: 输入包括两个正整数a,b(1 <= a, b <= 10^9),输入数据有多组, 如果输入为0 0则结束输入
> 
> 输出描述: 输出a+b的结果
> 
> 示例：
> 输入 
> 1 5 
> 10 20
> 0 0
> 
> 输出 
> 6
> 30

#### 方法1：sys.stdin

```python
    import sys
    for line in sys.stdin:
        x,y = map(int, line.split())
        if x or y:
            print(x+y)
```

#### 方法2：while+input()
*注意：使用while循环时，必须加循环结束语句以保证一定能跳出循环，否则OJ不通过。*

```python
    while True:
        x,y = map(int, input().split())
        if x == 0 and y == 0:
            break
        print(x+y)
```

### 不定行输入无结束标志示例
> 题目描述 计算a+b
> 
> 输入描述: 输入包括两个正整数a,b(1 <= a, b <= 10^9),输入数据有多组, 如果输入为0 0则结束输入
> 
> 输出描述: 输出a+b的结果
> 
> 示例：
> 输入 
> 1 5 
> 10 20
> 0 0
> 
> 输出 
> 6
> 30

#### 方法1：sys.stdin

```python
    import sys
    for line in sys.stdin:
        a,b = map(int, line.split())
        print(a+b)
```

#### 方法2：while+input()
*多行输入没有结束标志时，若使用while循环，我们应当使用try，except语句。如下：*

```python
    while True:
        try:
            a,b = map(int,input().split())
            print(a+b)
        except:
            break
```

*通过判断输入是否为空作为跳出循环的判断语句，是错误的，如下：*

```python
    while True:
        line = input()
        if line == '':
            break
        else:
            a,b = map(int,line.split())
            print(a+b)
```
