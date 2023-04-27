#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,s=10,a[s];
   s=sizeof(a)/4;
   printf("Input 10 elements in the array:");
   for(i=0;i<s;i++)
   {
       printf("\nelement-%d:",i);
       scanf("%d",&a[i]);
   }

   printf("Elements in array are:");
   for(i=0;i<s;i++)
   {
       printf("%d",a[i]);
   }
}
