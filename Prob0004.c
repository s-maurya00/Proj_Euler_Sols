#include <stdio.h>

int isPalindrom(int n)
{
    int rem = 0, rev = 0, temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        rev = (rev*10) + rem;
        temp /= 10;
    }
    if(rev == n)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int isDivByThreeDigitNo(int n)
{
    for(int i = 999; i > 99; i--)
    {
        if(((n % i) == 0) && (99 < (n/i)) && ((n/i) < 999))
        {
            printf("Divisible by %d", i);
            return(1);
        }
    }
    return 0;
}

void main()
{
    for(int i = 998001; i > 9999; i--)
    {
        if(isPalindrom(i))
        {
            // printf("%d ", i);
            if(isDivByThreeDigitNo(i))
            {
                printf("\nThe result is:\t%d", i);
                break;
            }
        }
    }
}