#include <stdio.h>
#include "main.h"

//  Program entry point
int main() {
    return main_hello("World");
}

int main_hello(char * name) {
    printf("Hello %s!\n", name);
    return 0;
}