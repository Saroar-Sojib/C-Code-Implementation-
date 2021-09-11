#include<stdio.h>
int main()
{
    int i , j, n,len;
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Enter n : ");
    scanf("%d", &n);
    len = strlen(name);

    // This is for 2 pyramid shape in a line:

    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
          printf(" ");
        }


        for(j=1; j<=i; j++)
        {
          printf("*");
        }


        for(j=1; j<=n-i; j++)
        {
           printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

       printf("\n");

    }

    // this is for string line : *****i love u*****
    for(i=n; i>=1; i--)
    {
       for(j=i; j<n; j++)
       {
           printf(" ");
       }
       if(i == n)
       {
           for(j=1; j<=(n * 2-len)/2; j++)
           {
               printf("*");
           }

           printf("%s", name);

           for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
       }

       else
       {
           for(j=1; j<=(i*2)-1; j++)
           {
               printf("*");
           }

       }

       printf("\n");

    }
    return 0;
}
