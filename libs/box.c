#include "box.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


char* box(
    const int top,
    const int left,
    const int width,
    const int height
){
    int i;
    char * out = (char *) malloc( 6 + (height*(width * 2)));
    char pos[20];
    sprintf(
       pos,
       "\033[%d;%dH",
       top,
       left
    );
    strcat(
       out,
       pos
    );
    strcat(
       out,
       boxUp( width )
    );
    for ( i = 0; i < height; i++ ){
        sprintf(
           pos,
           "\033[%d;%dH", 
           (top+1+i), 
           left
        );
        strcat(
           out,
           pos
        );
        strcat(
           out,
           boxSide( width )
        );
    }
    sprintf(
       pos,
       "\033[%d;%dH",
       (top+height+1),
       left
    );
    strcat(
       out,
       pos
    );
    strcat(
       out,
       boxDown( width )
    );
    return out;
}

char* boxSide(const int width){
    char * out = (char *) malloc( 3 + width );
    sprintf(out, "│\033[%dC│", width);
    return out;

}


char* boxUp(const int width){
    int i;
    char * out = (char *) malloc( 3 + width );
    strcat(
        out,
        "┌"
    );
    for ( i = 0; i < width; i++ ){
        strcat(
            out,
            "─"
        );
    }
    strcat(
        out,
        "┐"
    );
    return out;
}

char* boxDown(const int width){
    int i;
    char * out = (char *) malloc( 3 + width );
    strcat(
        out,
        "└"
    );
    for ( i = 0; i < width; i++ ){
        strcat(
            out,
            "─"
        );
    }
    strcat(
        out,
        "┘"
    );
    return out;
}
