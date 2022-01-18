#include <stdio.h>

void fibonacci()
{
    int ans = 0, temp = 0, prev = 1, current = 2;

    while((current + prev) <= 4000000)
    {
        temp = prev;
        prev = current;
        if((current & 1) == 0)
        {
            ans += current;
        }
        current += temp;
    }
    if((current & 1) == 0)
    {
        ans += current;
    }
    printf("%d", ans);
}

void main()
{
    fibonacci();
}