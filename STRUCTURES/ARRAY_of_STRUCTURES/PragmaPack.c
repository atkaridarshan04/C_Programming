#include <stdio.h>
#pragma pack(1)
struct st
{
    int i;
    char ch;
    float j;
};
#pragma pack(0)

int
main()
{
    struct st e;
    printf("%u %u %u", &e.i,&e.ch,&e.j);

    return 0;
}

// As shown in the output of this programme the float is stored immediatiely after the ch due to use of pragma pack.