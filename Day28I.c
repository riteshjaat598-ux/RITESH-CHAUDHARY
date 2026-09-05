#include <stdio.h>

int main()
{
    int i, j, k, Prime;
    printf("Find prime numbers between 1 to  ");
    scanf("%d", &k);

    printf("All prime numbers between 1 to %d are:\n", k);

    for(i=2; i<=k; i++)
    {
        Prime = 1; 

        for(j=2; j<=i/2; j++)
        {
         
            if(i%j==0)
            {
                Prime = 0;
                break;
            }
        }

        if(Prime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}