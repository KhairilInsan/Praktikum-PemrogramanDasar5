sentence = input("Kalimat : ")
vowel = 0
consonant = 0

for letter in sentence.lower():
    if letter in "aiueo":
        vowel += 1
    elif letter.isalpha():
        consonant += 1

print("Jumlah Vokal :", vowel)
print("Jumlah Konsonan :", consonant)
