#include<stdio.h>



int bis(int x,int m)
{
    x |= m;
    return x; 
}
int bic(int x,int m)
{
    x ^= m;
    return x;
}

int main()
{

    return 0;
}