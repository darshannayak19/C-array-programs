#include <stdio.h>
int countelement(int[],int);
int main()
{
    int i,k,count;
    int arr[25];
    printf("enter the element of array:");
    for(i=0;i<=24;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search in array:");
    scanf("%d",&k);
    count=countelement(&arr[0],k);
    if(count==0)
    {
        printf("the number does not lie in array");
    }
    else
    {
        printf("the number %d occurs %d times in array",k,count);
    }
}
int countelement(int arr[0],int k)
{
    int i,c=0;
    for(i=0;i<=24;i++)
    {
        if(k==arr[i])
        {
            c++;
     }   }
       return c;
}

