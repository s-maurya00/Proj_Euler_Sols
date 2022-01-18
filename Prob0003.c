#include <stdio.h>
#include <math.h>

int primeFact(long long int n, long long int pFacts[])
{
    int cnt = 0;
    long long int root;

    root = sqrt(n);
    for(long long int i = 2; i <= root; i++)
    {
        if((n % i) == 0)
        {
            pFacts[cnt] = i;
            cnt++;
            n /= i;
            while((n % i) == 0)
            {
                n /= i;
            }
        }
    }
    if(n > 1)
    {
        pFacts[cnt] = n;
        cnt++;
    }
    return cnt;
}

void main()
{
    int count;
    long long int n, res[100];
    printf("Enter Number whose prime factors are to be calc.\t");
    scanf("%lld", &n);

    count = primeFact(n, res);

    printf("\ncount is: %d\n", count);
    for(int i = 0; i < count; i++)
    {
        printf("%lld ", res[i]);
    }
}