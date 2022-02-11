#include<stdio.h>

int input()
{
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  return num;
}

int gcd(int a, int b)
{
  int large, small, i, rem;
  large = a>b ? a : b;
  small = a<b ? a : b;
  i = 1;
  rem = 1;

  while(rem)
  {
    rem = large - i * small;
    if(rem < small)
    {
      large = small;
      small = rem;
      i = 0;
    }
    i++;
  }
  return large;
}

void output(int a, int b, int gcd)
{
  printf("gcd of %d and %d is %d\n",a,b,gcd);
}

int main()
{
  int a, b, hcf;
  a = input();
  b = input();
  hcf = gcd(a, b);
  output(a, b, hcf);
  return 0;
}

