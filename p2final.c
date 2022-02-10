#include<stdio.h>

int input_side()
{
  int side;
  printf("Enter a side of the triangle\n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c)
{
  if(a !=b && b != c && a !=c)
  {
    return 1;
  }
  return 0;
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene)
  {
    printf("Triangle is scalene\n");
  }
  else
  {
    printf("Triangle is not scalene\n");
  }
}

int main()
{
  int a, b, c, res;
  a = input_side();
  b = input_side();
  c = input_side();
  res = check_scalene(a, b, c);
  output(a, b, c, res);
  return 0;
}