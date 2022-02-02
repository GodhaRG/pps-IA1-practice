#include<stdio.h>
int cmp(int a, int b, int c)
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
void output (int a, int b,int c ,int large)
{
  printf("the largest of the three numbers %d,%d,%d is  %d\n",a,b,c,large);
}
int main()
{
  int  a, b ,c, large;
  printf("enter 3 numbers\n");
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  return 0;
}




 

  
  
   
  
   
  


  





    
    


int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
