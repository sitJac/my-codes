while True:
    try:
        c = int(input())
        num = {2,3,4,5,6,7,8,9}
        if c <= 0:
            break
        else:
            flag = 0
            for i in num:
                if c % i == 0:
                    print (i, end=' ')
                    flag = 1
            if flag == 0:
                print("none")
        print("\n",end='')
    except:
        break