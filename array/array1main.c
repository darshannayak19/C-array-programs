#include <stdio.h>
#include <stdlib.h>

int main()
{int large,small,i;
 int s[5];
 printf("enter the elements of array");
 for(i=0;i<=4;i++)
 {
  scanf("%d",&s[i]);
 }
 large=small=s[0];
 for(i=1;i<=4;i++)
 {
     if(large<s[i]||small>s[i])
     {
         large=s[i];

     }
 else
 {   small=s[i];

 }

 }
 printf("smallest number is:%d\n",small);

printf("largest number is:%d",large);
    return 0;
}
