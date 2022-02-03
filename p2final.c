#include<stdio.h>
int cmp(int a,int b,int c)
{
  if(a>b)
  {
    if(a>c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else 
  {
    if(b>c)
    {
      return b;
    }
    else 
    {
      return c;
    }
  }
}
int input()
  {
    int x;
    scanf("%d",&x);
    return x;
  }
  void output(int a,int b,int c,int large)
  {
    printf("the largest among the three is %d\n",large);
  }
  int main()
  {
    int a,b,c,large;
    printf("enter 3 numbers\n");
    a=input();
    b=input();
    c=input();
    large=cmp(a,b,c);
    output(a,b,c,large);
    return 0;
  }
  
  
