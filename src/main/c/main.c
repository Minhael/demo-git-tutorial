#include <stdio.h>
#include "main.h"

//  Program entry point
int main() {
    int rt = 0;
    
    rt = main_hello("valued customer");
    if (rt > 0)
        return rt;

    char c = "\0";
<<<<<<< HEAD
    scanf("%c", &c);
    printf("You pressed %c\n", c);
=======
    rt = main_read_keystroke(&c);
    if (rt > 0)
        return rt;
>>>>>>> main

    return 0;
}

int main_hello(char * name) {
    printf("Greetings %s! Enjoy your day here.\n", name);
    return 0;
}

int main_read_keystroke(char *c) {
    scanf("%c", &c);
    return 0;
}
