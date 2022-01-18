
from audioop import add


def evenFibo():
    addn = 0
    prev = 1
    current = 2
    while(current <= 4000000):
        if(current & 1 == 0):
            addn += current
        current += prev
        prev = current - prev

    if(current & 1 == 0):
        addn += current
    return addn

ans = evenFibo()
print(ans)