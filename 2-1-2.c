//练习题2-6
#include <stdio.h>
typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start,size_t len){
    size_t i;
    for(int i = 0 ;i < len; i++)
        printf(" %.2x",start[i]);
    printf("\n");
}

void test()
{
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;
    //小端
    show_bytes(valp,1); //21
    show_bytes(valp,2); //21 43
    show_bytes(valp,3); //21 43 65
    //大端
    show_bytes(valp,1); //87
    show_bytes(valp,2); //87 65
    show_bytes(valp,3); //87 65 43
}


int main()
{
    test();
    return 0;
}