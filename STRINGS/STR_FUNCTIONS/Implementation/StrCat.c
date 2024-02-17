// Use to append two string

#include <stdio.h>

void myStrcat(char *tgt, char *src) {
    while (*tgt != '\0') {
        tgt++; // tgt = tgt + 1  
    }

    while (*src != '\0') {
        *tgt = *src;  
        tgt++;
        src++;     
    }

    *tgt = '\0';
}

int main() {
    char tgt[] = "Hello "; //hello 
    char src[] = "World!";

    myStrcat(tgt, src);

    printf("%s\n", tgt);
  
    return 0;
}
