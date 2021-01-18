#include <stdio.h>
#include <stdlib.h>
int add(int q[][3],int p[][3],int r[][3]);
int multiply(int q[][3],int p[][3],int r[][3]);
int main()
{
    int i,j;
    int arr1[3][3],arr2[3][3],arr3[3][3];
    printf("enter the elements of first matrix:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the elements of second matrix:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nfirst matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%5d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nsecond matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%5d",arr2[i][j]);
        }
        printf("\n");
    }
    add(arr1,arr2,arr3);
    multiply(arr1,arr2,arr3);
    return 0;
}
int add(int q[][3],int p[][3],int r[][3])
{
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            r[i][j]=q[i][j]+p[i][j];
    }
    }
    printf("addition of first two array array is:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%5d",r[i][j]);
    }
    printf("\n");
    }
return 0;
}
int multiply(int q[][3],int p[][3],int r[][3])
{
    int i,j,k,sum=0;
    printf("multiple of two array are:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            {
            for (k=0;k<=2;k++)
            {
           sum=sum+q[i][k]*p[k][j];
        }
        r[i][j]=sum;
        sum=0;

      printf("%5d",r[i][j]);
    }printf("\n");
    }return 0;
}
