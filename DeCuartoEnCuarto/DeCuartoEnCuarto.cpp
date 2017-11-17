#include "DeCuartoEnCuarto.h"

bool use[500010],done=false;

void Player1(int x,int y){
    if(x == y){
        done = true;
        return;
    }

    use[x] = true;

    int v1 = siguienteCuarto(1), v2 = siguienteCuarto(2);

    if(v1!=-1 && !use[v1] && !done){
        move(v1);
        Player1(v1,y);
        if(!done) regresa();
    }

    if(v2!=-1 && !use[v2] && !done){
        move(v2);
        Player1(v2,y);
        if(!done) regresa();
    }

    return;
}
