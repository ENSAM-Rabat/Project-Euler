#include <stdio.h>
#include <math.h>

int palindrome(int n)
{
  int r,s=0,tmp=n;
  while(n>0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  if(tmp==s)
    return 1;
  else
    return 0;
}
int Largest_palindrome_product(int n)
{
  int max=0,a,b;
  double hl=pow(10, n)-1;
  double ll=pow(10,n-1);
  for(int i = hl;i>=ll;i--)
  {
    for(int j=i;j>=ll;j--)
    {
        if(palindrome(i*j)& i*j > max )
        {
            max = i*j;
        }
    }
  }
  return max;
}

int main() {

  printf("%d",Largest_palindrome_product(3));
}
