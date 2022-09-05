from decimal import Decimal, getcontext
getcontext().prec = 100

while True:
    try:
        a = Decimal(input())
        b = Decimal(input())
        print ( a + b )
    except:
        break