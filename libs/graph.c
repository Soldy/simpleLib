#include "graph.h"
#include <string.h>
#include <stdlib.h>


char * lineBarGraphPiece(int percent){
    if(11 > percent){
       return " ";
    }else if(22 > percent){
       return "▁";
    }else if(33 > percent){
       return "▂";
    }else if(44 > percent){
       return "▃";
    }else if(55 > percent){
       return "▄";
    }else if(66 > percent){
       return "▅";
    }else if(77 > percent){
       return "▆";
    }else if(88 > percent){
       return "▇";
    }else if(percent >= 100){
       return "█";
    }
    return " ";
}



char* lineBarGraph(const int width, const int data[]){
    int i;
    char * out = (char *) malloc( 1 + width );
    for ( i = 0; i < width; i++ ){
        strcat(
            out,
            (char * ) lineBarGraphPiece(data[i])
        );
    }
    return out;
}
