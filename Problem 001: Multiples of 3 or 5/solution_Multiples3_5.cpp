#include<iostream>
using namespace std;

int main(){
    int N=1000;
    int sum=0;
    for (int i = 3; i < N; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum+=i;
        }
    }
    cout<<sum;
}
