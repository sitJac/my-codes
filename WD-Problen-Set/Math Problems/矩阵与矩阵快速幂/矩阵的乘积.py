while True:
    try:
        arr1=[]
        arr2=[]
        for i in range(2):
            arr1.append(list(map(int,input().strip().split(' '))))
        for i in range(3):
            arr2.append(list(map(int,input().strip().split(' '))))
        result=[]
        for i in range(2):
            result.append([0]*2)
        for i in range(2):
            for j in range(2):
                sum1=0
                for k in range(3):
                    sum1+=arr1[i][k]*arr2[k][j]
                result[i][j]=str(sum1)
        for i in result:
            print(' '.join(i)+' ')

    except:
        break