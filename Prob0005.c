#include <stdio.h>

void selfSol()  //Naive Way to solve-Self solution
{
    // printf("%d", 2*3*4*5*6*7*8*9*10)
    // printf("%d", 3*4*5*6*7*8*9*10)
    // printf("%d", 4*5*6*7*8*9*10)
    // printf("%d", 5*6*7*8*9*10)
    // printf("%d", 7*4*9*10);

    // printf("%d", 2*3*4*5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 3*4*5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 4*5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 6*7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 8*9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 9*10*11*12*13*14*15*16*17*18*19*20);
    // printf("%d", 10*11*12*13*14*15*16*17*18*19*20);
    // printf("%lld", 11*12*13*14*15*16*17*18*19*20);
    int i = 2;
    while(1)
    {
        if(((i%3)==0) && ((i%4)==0) && ((i%5)==0) && ((i%6)==0) && ((i%7)==0) && ((i%8)==0) && ((i%9)==0) && ((i%10)==0) && ((i%11)==0) && ((i%12)==0) && ((i%13)==0) && ((i%14)==0) && ((i%15)==0) && ((i%16)==0) && ((i%17)==0) && ((i%18)==0) && ((i%19)==0) && ((i%20)==0))
        {
            printf("%d", i);
            break;
        } 
        i += 2;
    }
}

void primeFactCount(int len, int sol[][], int inp[])
{
    if(len == -1)  //here calculate the length and then procede
    {
        
    }
    else    //here the range is given 
    {

    }
}

void main()
{
    // selfSol();
    
    // concept form proj_Euler
    // First find prime factors of each number and maintain an array with the count of each prime factor in an array
    // Next, repeat for all numbers and update the count of each prime factor to the maximum value that any of the number in the given range had. Eg. for 1 to 20, ans is: 2^4 * 3^2 * 5 * 7 * 11 * 13 * 17 * 19
    int sol[2][100];
    int n, opt = 0;
    printf("Choose:\t1. Enter the numbers\t2. Enter the Range(from 1 to n):\t");
    scanf("%d", &opt);

    switch(opt)
    {
        case 1:
        {
            char strInp[100];
            int inp[100];
            scanf("%[^\n]", strInp);
            convertInp(strInp, inp);

            primeFactCount(-1, sol, inp);
            break;
        }
        case 2:
        {
            scanf("%d", &n);
            primeFactCount(n, sol, -1);
            break;
        }
    }
}