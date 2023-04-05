#include "cursor.cpp"
#include "mapas.cpp"
#include "objetivo.cpp"


void jogo(int MJ[20][22], int &x, int &y, int mapa){
    system("Cls");
    int mov;
    do{
        resetaCursor();

        imprimeMapa(MJ, x, y);

        mov = movimentos(MJ, x, y);

        objetivo(MJ, mapa);

    } while (mov !=2);//fim do laço do jogo a partir do retorno 2 da funcao movimentos(apenas com o ESC)

} // fim da funcao que funciona enquanto eu nao apertar ESC