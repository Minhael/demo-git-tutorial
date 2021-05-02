#include "../../main/c/main.h"

//  Unit test entry
int test() {
    int rt = 0;

    rt = test_main_hello();
    if (rt > 0)
        return rt;
}

int test_main_hello() {
    return main_hello("Unit Test");
}