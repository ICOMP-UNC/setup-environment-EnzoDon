#include <greetings.h>
#include <stdio.h>

#include "shared.h"
#include "static.h"

int main(int argc, char *argv[])
{
    printf("First program!\n");
    greetings();
    printf("Calling shared library from main. I get %d\n", shared_lib_function("I'm a shared library!"));
    printf("Calling static library from main. I get %d\n", static_lib_function("I'm a static library!"));
    return 0;
}