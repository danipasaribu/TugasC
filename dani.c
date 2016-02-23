#include <stdio.h>
int main()
{
int i,j,n;
printf("Masukkan Nilai n:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    if(i==0||i==n-1)
        {
        for(j=0;j<n;j++)
            {
                if(j==0||j==n-1)
                    {
                        printf(" ");
                    }
                    else
                        {
                            printf("*");
                        }
            }
        }
        else
            {
                for(j=0;j<n;j++)
                    {
                    printf("*");
                    }
            }

    printf("\n");
}
}
