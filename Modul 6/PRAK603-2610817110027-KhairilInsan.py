row, column = map(int, input().split())

if row != column:
    print("Jumlah tidak sama")
else:
    first = list(map(int, input().split()))
    second = list(map(int, input().split()))

    for i in range(row):
        print(first[i] * second[i], end="")
        if i < row - 1:
            print(" ", end="")
