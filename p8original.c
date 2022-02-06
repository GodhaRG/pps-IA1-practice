#include<stdio.h>
struct complex
{
  float real,imaginary;
};
int get_n()
{
  int n;
  scanf("%d",&n);
  return n;
}
struct complex input_complex()
{
  struct complex k;
  scanf("%f %f",&k.real,&k.imaginary);
  return k;
}
void input_n_complex(int n, struct complex c[n])
{
  for(int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
struct complex add_n_complex(int n,struct complex c[n])
{
  struct complex k;
  k.real=0;
  k.imaginary=0;
  for(int i=0;i<n;i++)
  {
    k.real=k.real+c[i].real;
    k.imaginary=k.imaginary+c[i].imaginary;
  }
  return k;
}
void output(int n,struct complex c[n],struct complex result)
{
 printf("%f+%fi\n",c[0].real,c[0].imaginary);
 for (int i=1;i<n;i++)
 {
   printf("+ %f+%fi\n",c[i].real,c[i].imaginary);
 }
 printf("= %f+%fi\n",result.real,result.imaginary);
}
int main()
{
  struct complex result;
  int n;
  printf("enter the number of complex numbers\n");
  n=get_n();
  struct complex c[n];
  printf("enter the %d complex numbers (a+bi)in the form 'a b'\n",n);
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}