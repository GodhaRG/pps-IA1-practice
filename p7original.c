#include<stdio.h>
struct complex
{
  float real,imaginary;
};
struct complex input_complex()
{
  struct complex k;
  scanf("%f %f",&k.real,&k.imaginary);
  return k;
}
struct complex add_complex(struct complex a, struct complex b)
{
  struct complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(struct complex a,struct complex b, struct complex c)
{
  printf("(%f+%fi) + (%f+%fi) is (%f+%fi)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  struct complex a,b,c;
  printf("enter  first  complex number a+bi in the form 'a b'\n");
  a=input_complex();
  printf("enter  second complex number a+bi in the form 'a b'\n");
  b=input_complex();
  c=add_complex(a,b);
  output(a,b,c);
  return 0;
}