#include<stdio.h>
float input()
{
  printf("enter the number\n");
  float k;
  scanf("%f",&k);
  return k;
}
float my_sqrt(float n)
{
  float sqrt;
  float a=n/2;
  float a2=n;
  while(a2!=a)
  {
    a2=a;
    a=(a+(n/a))/2;
  }
  return a;
}
void output (float n,float sqrt_result)
{
  printf("square root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float sqrt, n;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}

