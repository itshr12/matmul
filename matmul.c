#include<stdio.h>
int main()
{
    int q[3][3],w[3][3],e[3][3],a,s,d,f;
    printf("enter matrix:");
    for(a=0;a<=2;a++)
    {
        for(s=0;s<=2;s++)
        {
            scanf("%d",&q[a][s]);
        }
    }
     printf("enter matrix2:");
    for(a=0;a<=2;a++)
    {
        for(s=0;s<=2;s++)
        {
            scanf("%d",&w[a][s]);
        }
    }

    for(a=0;a<=2;a++)
    {
        for(s=0;s<=2;s++)
        {
           d=q[a][s]*w[a][s];
           e[a][s]=d;
        }
    }

     printf("New Matrix is : ");
    for(a=0;a<=2;a++)
    {
        for(s=0;s<=2;s++)
        {
            printf("%d",e[a][s]);
        }
        printf("\n");
    }
}