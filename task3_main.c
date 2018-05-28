#include<stdio.h>
#include"sortng.h"


int main()
{
int a[20],k,j,i,n;
printf("Enter no of elements\n\n");
scanf("%d",&n);
printf("Enter the Array Elements\n\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Array elements before sorting\n");

for (i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

sortng(a,n);
return 0;
}


