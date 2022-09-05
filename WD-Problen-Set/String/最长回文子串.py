a = input()
re = []
for i in range(len(a)):
    for j in range(i+1, len(a)+1):
        if(a[i:j] == a[i:j][::-1]):
            re.append(j - i)
print(max(re))