#include "screen.h"
#include <stdio.h>
void clearScreen(void){
    printf("\033[2J");
    printf("\033[H");
}

