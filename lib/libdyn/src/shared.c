#include "shared.h"
#include <stdio.h>
#include <string.h>


int shared_lib_function(char* msg){
    printf("Hi! I'm writing '%s' from shared library!\n",msg);
    return strlen(msg);
}