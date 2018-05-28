#include<stdio.h>
#include"sortng.h"	// including the sorting function defnition 

void sortng(int a[],int n)
{
int i,j,k;
for (i=0;i<n;i++)
{
for (j=0;j<n-i;j++)
{
// comparing the element with the next element:...
if (a[j]>a[j+1])
{
k=a[j];
a[j]=a[j+1];
a[j+1]=k;
}
}
}
printf("SORTED ARRAY\n\n");
for(i=0;i<=n;i++)
{

printf("%d\n",a[i]);

}
}
