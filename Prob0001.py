num = int(input("Enter the Range(n):\t"))
addn = 0

for i in range(1, num):
    if((i % 3 == 0) or (i %5 == 0)):
        addn += i
print(addn)