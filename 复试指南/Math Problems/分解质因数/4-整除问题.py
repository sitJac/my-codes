from math import factorial as f

n, a = map(int, input().split())

for i in range(1, 1000):
    if f(n) % (a ** i) == 0 and f(n) % (a ** (i + 1)) != 0:
        print(i)
        break;