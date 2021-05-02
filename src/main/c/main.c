#include <stdio.h>
#include "main.h"

//  Program entry point
int main() {
    return main_hello("my friend");
}

//  main.h
int main_hello(char * name) {
    printf("Greetings %s! It is a good day today.\n", name);
    return 0;
}