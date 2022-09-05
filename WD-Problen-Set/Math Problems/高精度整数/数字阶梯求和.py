while True:
    try:
        a, n = map(int, input().split())
        answer = 0
        temp = 0
        for i in range(n):
            answer = answer + (temp * 10 + 1)
            temp = temp * 10 + 1
        print(answer)
    except:
        break