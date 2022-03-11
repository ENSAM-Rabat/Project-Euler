#include <stdio.h>
#include <stdlib.h>

int three_or_five(int n)
{
    int s=0;
    n-=1;
    while(n>2)
    {
        if(n%5==0 || n%3==0)
            s+=n;
        n--;
    }
    return s;
}

int main()
{
    printf("%d",three_or_five(1000));
}
