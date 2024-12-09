#include <stdio.h> //to find whether number (n )is prime or not
int main()
{
  int n, prime = 0;
  printf("Enter n:\n");
  scanf("%d", &n);
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      prime = 1;
  }
  if (prime)
  {
    printf(" is not prime\n");
  }
  else
  {
    printf(" is prime\n");
  }
  return 0;
}