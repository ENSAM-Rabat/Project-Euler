#include <iostream>
using namespace std;
int main()
{
    unsigned long long factorNumber = 600851475143;
    bool isPrime = 1;
    int lastPrime = 2;
    for (int i = lastPrime; i < factorNumber; i++)
    {
        isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                isPrime = 0;
        }
        if (isPrime && (factorNumber % i == 0))
        {
            lastPrime = i;
            factorNumber = factorNumber / i;
        }
    }
    cout<<factorNumber;
    return 0;
}
