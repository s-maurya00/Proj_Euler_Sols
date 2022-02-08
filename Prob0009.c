#include<stdio.h>

int fastPower(int a, int n)
{
    int res;
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return a;
    }
    else
    {
        res = fastPower(a, n/2);
        if((n & 1) == 0)
        {
            return(res * res);
        }
        else
        {
            return(res * a * res);
        }
    }
    return res;
}

int isPyTriplet(int n1, int n2, int n3)
{
    int a, b, c;
    a = fastPower(n1, 2);
    b = fastPower(n2, 2);
    c = fastPower(n3, 2);

    if((a + b == c) || (a + c == b) || (b + c == a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isSum1000(int n1, int n2, int n3)
{
    if((n1 + n2 + n3) == 1000)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n1, n2, n3, flag = 0;

    for(int i = 1; i < 1000; i++)
    {
        n1 = i;
        for(int j = 1; j < (1000-i); j++)
        {
            n2 = j;
            n3 = 1000 - (n1 + n2);
            if(isPyTriplet(n1, n2, n3))
            {
                if(isSum1000(n1, n2, n3))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
    printf("\nn1 = %d, n2 = %d, n3 = %d", n1, n2, n3);
}