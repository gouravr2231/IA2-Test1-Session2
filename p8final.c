#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;

int input_n()
{
  int n;
  printf("How many triangles will you enter:\n");
  scanf("%d",&n);
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter base and altitude\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}

void input_n_triangles(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i] = input_triangle();
    }
}

void find_area(Triangle *t)
{
  
}