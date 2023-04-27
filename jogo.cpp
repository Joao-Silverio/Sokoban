#include "cursor.cpp"
#include "mapas.cpp"
#include "objetivo.cpp"


void jogo(MAPA mapajogo, int &x, int &y, int mapa){
    system("Cls");
    int mov;
    do{
        resetaCursor();

        imprimeMapa(mapajogo, x, y);

        mov = movimentos(mapajogo);

        //objetivo(mapajogo, mapa);

    } while (mov !=2);//fim do laço do jogo a partir do retorno 2 da funcao movimentos(apenas com o ESC)

} // fim da funcao que funciona enquanto eu nao apertar ESC
