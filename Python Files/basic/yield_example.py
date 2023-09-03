def num2dlist(matrix):
    for row in matrix:
        for num in row:
            yield num

matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

m = num2dlist(matrix)

print(type(m))
for i in m:
    print(i, end=' ')