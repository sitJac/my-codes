while True:
    try:
        x, y, k = map(int, input().split())
        result = 1
        while y:
            if y % 2 == 0:
                result = (result * x) % (k - 1)
            x = (x * x) % (k - 1)
            y = y // 2
        result = result if result else k - 1
        print(result)
    except:
        break;