#include <stdio.h>

int main()
{
   int i,j,n,count=0,flag;

   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

for(i=0;i<n;i++)
   {
       flag=0;
       for(j=0;j<n;j++)
       {
           if(arr[i]==arr[j] && i!=j)
           {
            flag=1;
           count++;
               
           }
           
        }
      
   if(flag==0)
   printf("Unique elemts are %d\n",arr[i]);
   }
   
   return 0;
}
