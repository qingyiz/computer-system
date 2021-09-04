#include <stdio.h>
typedef unsigned char * byte_pointer;
void show_bytes(byte_pointer start,size_t len){
    size_t i;
    for(int i = 0 ;i < len; i++)
        printf(" %.2x",start[i]);
    printf("\n");
}

int main()
{
    char s[100];
    short sx = -12345;          /*-12345*/
    unsigned short usx = sx;    /*53191*/
    int x = sx;                 /*-12345*/ 
    unsigned ux = usx;          /*53191*/
    printf("sx = %d:\t",sx);
    show_bytes((byte_pointer)&sx , sizeof(short));
    printf("sx = %u:\t",usx);
    show_bytes((byte_pointer)&usx , sizeof(short));
    printf("sx = %d:\t",x);
    show_bytes((byte_pointer)&x , sizeof(short));
    printf("sx = %u:\t",ux);
    show_bytes((byte_pointer)&ux , sizeof(short));
    return 0;
}