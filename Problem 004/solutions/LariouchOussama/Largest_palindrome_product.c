#include<stdio.h>

void main(){
    int x, y;
    int prod, revprod, reverse, max;

    max=0;
    for(x=100; x<1000; x++){

        for ( y = 100; y < 1000; y++)
        {
            prod=x*y;
            revprod=prod;
            reverse=0;
            while (revprod > 0)
            {
                reverse=reverse * 10 +revprod %10 ;
                revprod /= 10;

            }
            if (reverse == prod){
                if (prod > max)
                {
                    max=prod;
                }
                
            }
        }
        
    }
    printf("%d", max);

}
/* The output is: 906609*/
