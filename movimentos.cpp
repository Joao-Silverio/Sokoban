#include <conio.h>

void movimentos(int &x, int &y) {
            ///executa os movimentos
     if ( _kbhit() ){
        char tecla;
        tecla = getch();
        switch(tecla)
        {
            case 72: case 'w': ///cima
                x--;
            break;
            case 80: case 's': ///baixo
                x++;
            break;
            case 75:case 'a': ///esquerda
                y--;
            break;
            case 77: case 'd': ///direita
                y++;
            break;
            case 'f': ///fim do jogo
                x = 50;
            break;
        }
     }
}

void LoadPosicao(int mapa, int &x, int &y){
    if (mapa == 1){
        x = 12;
        y = 11;
    } else if (mapa == 2){
        x = 1;
        y = 14;
    } else if (mapa==3) {
        x = 2;
        y = 9;
    }
}