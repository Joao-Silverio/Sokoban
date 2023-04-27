#include "cursor.cpp"
#include "mapas.cpp"
#include "objetivo.cpp"


void jogo(MAPA &mapajogo){
    system("Cls");
    int mov;
    do{
        resetaCursor();

        imprimeMapa(mapajogo);

        mov = movimentos(mapajogo);

        objetivo(mapajogo);

    } while (mov !=2);//fim do laço do jogo a partir do retorno 2 da funcao movimentos(apenas com o ESC)

} // fim da funcao que funciona enquanto eu nao apertar ESC
