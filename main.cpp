#include "cursor.cpp"
#include "mapas.cpp"
#include "movimentos.cpp"
#include "telas.cpp"

int main()
{
    piscaCursor();

    //Posi��o inicial do personagem no console
    int x, y;
    int MJ[20][22];
    int qualMapa;
    inicio();
    qualMapa = NovoJogo();
    LoadMap(qualMapa, MJ);
    LoadPosicao(qualMapa,x, y);

    system("Cls");
    do{
        resetaCursor();

        imprimeMapa(MJ, x, y);

        movimentos(MJ, x, y);

    } while (gameOver(qualMapa, MJ) == false);//fim do laço do jogo

    return 0;
} //fim main