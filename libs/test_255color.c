#include "test_255color.h"
#include <stdio.h> 
#define COLOR_MIN 16 
#define COLOR_LIMIT 232 
#define COLOR_END 256
#define LINE_END 35


int test_255color(){
    int i = 0;
    int a = 0;
    printf("\n");
    for ( i = 0; COLOR_MIN > i; i++ ){
         printf("\e[38;5;%dmO", i);
    }
    printf("\n");
    for ( i = COLOR_MIN; COLOR_LIMIT > i; i++ ){
         printf("\e[38;5;%dmO", i);
         if( a == LINE_END){
             printf("\n");
             a = 0;
         }else{
             a++;
         }

    }
    for ( i = COLOR_LIMIT; COLOR_END > i; i++ ){
         printf("\e[38;5;%dmO", i);
    }
    a = 0;
    printf("\n");
    printf( "\e[0m \n");
    for ( i = 0; COLOR_MIN > i; i++ ){
         printf("\e[48;5;%dm ", i);
    }
    printf("\n");
    for ( i = COLOR_MIN; COLOR_LIMIT > i ; i++ ){
         printf("\e[48;5;%dm ", i);
         if( a == LINE_END){
             printf("\n");
             a = 0;
         }else{
             a++;
         }
    }
    for ( i = COLOR_LIMIT; COLOR_END > i; i++ ){
         printf("\e[48;5;%dm ", i);
    }
    printf("\n");
    printf( "\e[0m \n");
}
