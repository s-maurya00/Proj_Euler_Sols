#include <stdio.h>

unsigned long int fastPower(unsigned long int a, int n)
{
    unsigned long int res;
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


void main()
{
    int n;
    unsigned long int sqOfAddnOfNNos, addnOfSqOfNNos;
    printf("Enter the range:\n");
    scanf("%d", &n);
    sqOfAddnOfNNos = (n * (n+1))/2;
    sqOfAddnOfNNos = fastPower(sqOfAddnOfNNos, 2);
    addnOfSqOfNNos = (n * (n+1) * ((2 * n)+1))/6;
    printf("The difference between sqOfAddnOfNNos and AddnOfSqOfNNos is: %lu", sqOfAddnOfNNos-addnOfSqOfNNos);
}