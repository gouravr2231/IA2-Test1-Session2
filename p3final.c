#include<stdio.h>

int input_number()
{
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  return num;
}

int is_composite(int n)
{
  for(int i=2; i<=n/2; i++)
  {
    if(n%i == 0)
    return 1;
  }
  return 0;
}

void output(int n, int composite)
{
  if(composite)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is not a composite number\n",n);
  }
}

int main()
{
  int n, res;
  n = input_number();
  res = is_composite(n);
  output(n, res);
  return 0;
}