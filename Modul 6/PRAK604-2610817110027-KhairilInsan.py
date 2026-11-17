code = input()
real = input()
star = 0
hash = 0

if len(code) != len(real):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(code)):
        if code[i] == ' ' and real[i] == ' ':
            print(" ", end="")
        elif code[i] == real[i] and code[i] != ' ':
            print("*", end="")
            star += 1
        elif code[i] != real[i]:
            print("#", end="")
            hash += 1

    print(f"\n* = {star}", end="")
    print(f"\n# = {hash}", end="")

    if star >= hash:
        print("\nPesan Asli", end="")
    else:
        print("\nPesan Palsu", end="")
