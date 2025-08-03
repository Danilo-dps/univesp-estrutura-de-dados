#include<stdio.h>
#include <iostream>

using namespace std;

int f(int *a, int n)
{
  if(n <= 0) return 0;
  else if(*a % 2 == 0) return *a + f(a+1, n-1);
  else return *a - f(a+1, n-1);
}
  
int main()
{
  int a[] = {12, 7, 13, 4, 11, 6, 8, 10};
  // printf("%d ", f(a, 1));
  printf("%d ", f(a, 2));
  // printf("%d ", f(a, 3));
  // printf("%d ", f(a, 4));
  // printf("%d ", f(a, 5));
  // printf("%d ", f(a, 6));
  // printf("%d ", f(a, 7));
  // printf("%d ", f(a, 8));
  getchar();
  return 0;
}