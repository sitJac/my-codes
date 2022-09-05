while True:
    try:
        n = int(input())
        factorial = 1
        if n == 0:
            print(factorial)
        else:
            for i in range(1, n + 1):
                factorial = factorial * i
            print(factorial)
    except:
        break

#python支持大数计算，无限位数。
#对于小整数，它会使用机器自身的整数计算功能去快速计算，当超出机器自身所能支持的范围的时候，自动转换大数计算。 
#我用它算过100000的阶乘。 :)