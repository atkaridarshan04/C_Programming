#include <stdio.h>

int main()
{
    char *s[] = {
        "To err is human...",
        "But to really mess things up...",
        "One needs to know C!!"};

    for (int i = 0; i<3;i++){
        printf("%s\n",s[i]);
    }

    printf("\n");
    for (int i = 2;i>-1;i--){
        printf("%s\n",s[i]);
    }

    return 0;
}