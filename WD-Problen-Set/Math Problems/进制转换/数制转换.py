voc=['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
def f(n,b):    #十进制转化为b进制
    t=[]
    while n != 0:
        t.append(voc[n%b])
        n = n//b
    return ''.join(t)[::-1]
while True:
    try:
        s=input().split()
        a,b=int(s[0]),int(s[2])
        n=int(s[1],a)    #a进制转化为10进制
        print(f(n,b))    #10进制转化为b进制
    except:
        break