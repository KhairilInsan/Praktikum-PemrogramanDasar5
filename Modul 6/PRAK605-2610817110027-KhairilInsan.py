n = int(input())
A = []
B = []
C = [[0] * n for _ in range(n)]

for i in range(n):
    A.append(list(map(int, input().split())))
for i in range(n):
    B.append(list(map(int, input().split())))

for i in range(n):
    for j in range(n):
        C[i][j] = 0
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]
        print(C[i][j], end="")
        if j < n - 1:
            print(" ", end="")
    print()
