#include <stdio.h>
int i,j,n,a[100],temp;
void print_array()
{
	printf("the elements are: \n",a[i]);
}
void reverse_array()
{
 j=n-1;
 for(i=0;i<n/2;i++)
	{
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
	}
}
void main()
{
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
print_array();
}