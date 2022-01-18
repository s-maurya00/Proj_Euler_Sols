#include <stdio.h>

void main()
{
    int num = 0, subt = 0, addn = 0;
    printf("Enter range(n):\t");
    scanf("%d", &num);

    //my Solution
    /*
    int i = 3;
    while(i < num)
    {
        if(i%15 == 0)
        {
            subt += i;
        }
        addn += i;
        i += 3;
    }
    
    i = 5;
    while(i < num)
    {
        addn += i;
        i += 5;
    }
    addn -= subt;
    printf("%d", addn);
    */
   
   //better approach
   for(int i = 0; i < num; i++)
   {
       if((i % 3 == 0 )||(i % 5 == 0))
       {
           addn += i;
       }
   }
   printf("%d", addn);
}

