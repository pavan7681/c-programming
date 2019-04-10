#include <stdio.h>
void print_array()
{
int i,j,a[100],n;
  for(i=0;i<n;i++){
	printf(" %d ",a[i]);
	}
	printf("\n");
}
void reverse_array()
{
int i,j,n,temp,a[100];
i=0;
j=n-1;
 while(i<j)
	{
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
	 i++;
	 j--;
	}
}
void main()
{
 int i,j,n,a[100],temp;
 printf("enter the no of elements:");
 scanf("%d",&n);
 printf("enter the elements\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
   }
print_array();
reverse_array();
print_array();
reverse_array();
print_array();
}
