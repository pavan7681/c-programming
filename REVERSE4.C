#include<stdio.h>

int a[100],n,i,j,temp,k;
displayarray()
{
printf("\nenter the no of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
reversearray()
{
 i=0;
 j=n-1;
 printf("the reverse array is:\n");
 while(i<j)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  i++;
  j--;
}
}
printarray()
{
 for(k=0;k<n;k++)
 {
  printf("%d\n",a[k]);
  }
}
void main()
{
 displayarray();
 reversearray();
 printarray();
}