#include <stdio.h>

static char text[] = "Hello Muse!";

int main() {
    char * printme = text;
    printme = NULL;
    printf("%s\n",printme);
    return 0;
}
