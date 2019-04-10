#include<stdio.h>

 void swap(int *a,int *b)
 {
  int temp;

  temp=*a;
  *a=*b;
  *b=temp;
  }
  void main()
  {
  int x,y;
  printf("enter two numbers :\n");
  scanf("%d%d",&x,&y);
  swap(&x,&y);
  printf("value of x and y on swap :%d %d\n",x,y);
  }
