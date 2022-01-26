#include <stdio.h>

int sieveOfEratoSthenes(int n) //revesed: 0 means True and 1 means False
{
    int count = 0;
    short int isPrime[1000000] = {0};

    isPrime[0] = 1;
    isPrime[1] = 1;
    int i = 2;
    while((i < 1000000) && (count < n))
    {
        if(isPrime[i] == 0)
        {
            for(int j = 2*i; j < 1000000; j += i)
            {
                isPrime[j] = 1;
            }
            count++;
        }
        i++;
    }
    return(--i);
}

void main()
{
    int n;
    printf("\nEnter 'N' to find N'th Prime Number:\t");
    scanf("%d", &n);
    printf("\nThe %dth Prime No. is: %d", n, sieveOfEratoSthenes(n));
}