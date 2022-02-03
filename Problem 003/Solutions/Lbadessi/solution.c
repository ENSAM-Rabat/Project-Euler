#include <stdio.h>
int main(){
    unsigned long long int N = 600851475143;
    for (int i = 2; i < N ; i++){
        while( N % i == 0){
            N = N / i ;
        }
    }
    printf("the solution is: %llu \n", N);
}