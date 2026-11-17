room = int(input())
zetsu = list(map(int, input().split()))

for i in range(room):
    print(zetsu[i] * (i + 1), end=" ")
