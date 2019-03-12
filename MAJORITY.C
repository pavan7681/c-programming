#include<stdio.h>
int main()
{
int a[10],n,i,j,count=0,max,k;
printf("enter the no of elements\n");
scanf("%d",&n);
printf("enter the elements\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=0;
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
  {
    if(a[i]==a[j])
     {
       count=count+1;
      }
   }
  if(count>max)
  {
    max=count;
    k=i;
   }
  count=0;
}
printf("max repeating num is %d\n",a[k]);
}