#include <stdio.h>
#include "main.h"

//  Program entry point
int main() {
    int rt = 0;
    
    rt = main_hello("User");
    if (rt > 0)
        return rt;

    char c = "\0";
    scanf("%c", &c);
    printf("You pressed %c\n", c);

    return 0;
}

int main_hello(char * name) {
    printf("Greetings %s! Enjoy your day here.\n", name);
    return 0;
}

