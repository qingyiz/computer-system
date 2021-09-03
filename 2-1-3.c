//练习2-7
#include <stdio.h>
#include <string.h>

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start,size_t len){
    size_t i;
    for(int i = 0 ;i < len; i++)
        printf(" %.2x",start[i]);
    printf("\n");
}
int main()
{
    const char*s = "abcdef";
    //在使用ASCII码作为作为字符码时在任何系统上得到的结果都一样，与字节顺序和大小规则无关。
    //所以是 61 62 63 64 65 66
    show_bytes((byte_pointer)s,strlen(s));
    return 0;
}