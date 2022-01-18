import math

def primeFact(n):
    cnt = 0
    arr = []
    for i in range(2, int(math.sqrt(n)) + 1):
        if((n % i == 0)):
            arr.append(i)
            cnt += 1
            n = int(n/i)
            while((n % i) == 0):
                n = int(n/i)
    if(n > 1):
        arr.append(n)
    return arr

n = int(input("Enter the number: "))
arr = []
arr = primeFact(n)
print(arr[-1])