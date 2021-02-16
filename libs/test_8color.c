#include "test_8color.h"
#include <stdio.h> 
#define COLOR_LIMIT 8


int test_8color(){
    int i = 0;
    printf("\n");
    for ( i = 0; COLOR_LIMIT > i; i++ ){
         printf("\e[3%dmO", i);
    }
    printf( "\e[0m \n");
    for ( i = 0; COLOR_LIMIT > i ; i++ ){
         printf("\e[4%dm ", i);
    }
    printf( "\e[0m \n");
}
