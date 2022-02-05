#include<stdio.h>
#include<string.h>
void input_two_string(char *a,char*b)
{
  printf("enter two words\n ");
  scanf("%s",a);
  scanf("%s",b);
}
int str_cmp(char a[],char b[])
{
  int x,y,n;
  x=strlen(a);
  y=strlen(b);
  if(a>b)
  {
    n=x;
  }
  else 
  {
    n=y;
  }
  for (int k=0;k<n;k++)
  {
    if(a[k]>b[k])
    {
      return 1;
    }
    else if(a[k]==b[k])
    {
      continue;
    }
    else
    {
      return 2;
    }
  }
  return 0;
}
void output(char a[],char b[],int result)
{
  if(result==1)
  {
    printf("%s is greater than %s\n",a,b);
  }
  else if (result==2)
  {
    printf("%s is  greater than %s\n",b,a);
  }
  else
  {
    printf("both the words are same\n");
  }
}
int main()
{
  int k;
  char a[15],b[15];
  input_two_string(a,b);
  k=str_cmp(a,b);
  output(a,b,k);
  printf("%d\n",k);
  return 0;
}