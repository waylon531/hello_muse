#include <stdio.h>

static char text[] = "Hello Muse!";

int main() {
    char * printme = text;
    printme = NULL;
    printme[0] = 'X';
    printme[1] = 'X';
    printme[2] = 'X';
    printme[3] = '\0';
    printf("%s\n",printme);
    return 0;
}
