#include "cursor.cpp"
#include "mapas.cpp"
#include "movimentos.cpp"
#include "telas.cpp"


void jogo(int MJ[20][22], int &x, int &y){
    system("Cls");
    int mov;
    do{
        resetaCursor();

        imprimeMapa(MJ, x, y);

        mov = movimentos(MJ, x, y);

    } while (mov !=2);//fim do laço do jogo
}