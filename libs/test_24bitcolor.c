#include "test_24bitcolor.h"
#include <stdio.h> 
#define COLOR_LIMIT 256


int test_24bitcolor(){
    int i = 0;
    printf("\n");
    for ( i = 0; COLOR_LIMIT > i; i++ ){
         printf("\e[38;2;%d;0;0mO", i);
    }
    printf( "\e[0m \n");
    for ( i = 0; COLOR_LIMIT > i; i++ ){
         printf("\e[38;2;0;%d;0mO", i);
    }
    printf( "\e[0m \n");
    for ( i = 0;COLOR_LIMIT > i; i++ ){
         printf("\e[38;2;0;0;%dmO", i);
    }
    printf( "\e[0m \n");
    for ( i = 0;COLOR_LIMIT > i; i++ ){
         printf("\e[38;2;%d;%d;%dmO", i,i,i);
    }
    printf( "\e[0m \n");
    for ( i = 0;COLOR_LIMIT > i; i++ ){
         printf("\e[48;2;%d;0;0m ", i);
    }
    printf( "\e[0m \n");
    for ( i = 0; COLOR_LIMIT > i; i++ ){
         printf("\e[48;2;0;%d;0m ", i);
    }
    printf( "\e[0m \n");
    for ( i = 0;COLOR_LIMIT > i; i++ ){
         printf("\e[48;2;0;0;%dm ", i);
    }
    printf( "\e[0m \n");
    for ( i = 0;COLOR_LIMIT > i; i++ ){
         printf("\e[48;2;%d;%d;%dm ", i,i,i);
    }
    printf( "\e[0m \n");
}
