#include<stdio.h>

int main()
{
    short int u = -12345;//
    unsigned short int  uv = (unsigned short int )u;
    printf("%d\n",uv);//53191
    
    unsigned k = 4294967295;
    int kv= (int )k;
    printf("%d\n",kv);// -1
    
    return 0;

}