#include "static.h"
#include <stdio.h>
#include <string.h>


int static_lib_function(char* msg){
    printf("Hi! I'm writing '%s' from static library!\n",msg);
    return strlen(msg);
}