#include<stdio.h>

void main(){
    int x, y;
    int small, div;
    x=2520;
    small=0;
    while ( x > 0 )
    {
        y=1;
        while ((x % y == 0)&&(y <= 20))
        {
            if (y == 20 )
            {
                small=x;
                break;
            }
            y++;
        }
        x++;
        if (small > 0)
        {
            break;
        }
    }
    printf("%d", small); /* the output is 232792560*/
}