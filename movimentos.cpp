#include <conio.h>
#include "objetivo.cpp"
#include "voltarmov.cpp"

void andarcima(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 1) { //Se for caixa, e uma parede depois
        return;
    } else if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 2) { //Se for caixa, e uma caixa depois
        return;
    } else if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 4) { //Se for caixaa, e uma caixa no objetivo depois
        return;
    } else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 1){ //Se for caixa em um objetivo, e uma parede depois
        return;
    }else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 2){ //Se for caixa em um objetivo, e uma caixa depois
        return;
    }else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 0){ //Se for caixa, e nada depois
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x-2][mapajogo.y] = 2;
        mapajogo.x--;
        mapajogo.cont++;
    } else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 3){ //Se for caixa, e um objetivo depois
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x-2][mapajogo.y] = 4;
        mapajogo.x--;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 0){ //Se for caixa em um objetivo, e nada depois
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 3;
        mapajogo.matriz[mapajogo.x-2][mapajogo.y] = 2;
        mapajogo.x--;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 3){ //Se for caixa em um objetivo, e um objetivo depois
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 3;
        mapajogo.matriz[mapajogo.x-2][mapajogo.y] = 4;
        mapajogo.x--;
        mapajogo.cont++;
    }else {
        mapajogo.x--;
        mapajogo.cont++;
    }
} // fim da funcao que verifica se e possivel andar para cima

void andarbaixo(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 1) { //Se for caixa, e uma parede depois
        return;
    } else if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 2) { //Se for caixa, e uma caixa depois
        return;
    }  else if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 4) { //Se for caixa, e uma caixa no objetivo depois
        return;
    } else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 1){ //Se for caixa em um objetivo, e uma parede depois
        return;
    }else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 2){ //Se for caixa em um objetivo, e uma caixa depois
        return;
    }else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 0){ //Se for caixa, e nada depois
        mapajogo.matriz[mapajogo.x+1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x+2][mapajogo.y] = 2;
        mapajogo.x++;
        mapajogo.cont++;
    } else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 3){ //Se for caixa, e um objetivo depois
        mapajogo.matriz[mapajogo.x+1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x+2][mapajogo.y] = 4;
        mapajogo.x++;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 0){ //Se for caixa em um objetivo, e nada depois
        mapajogo.matriz[mapajogo.x+1][mapajogo.y] = 3;
        mapajogo.matriz[mapajogo.x+2][mapajogo.y] = 2;
        mapajogo.x++;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 4 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 3){ //Se for caixa em um objetivo, e um objetivo depois
        mapajogo.matriz[mapajogo.x+1][mapajogo.y] = 3;
        mapajogo.matriz[mapajogo.x+2][mapajogo.y] = 4;
        mapajogo.x++;
        mapajogo.cont++;
    }else {
        mapajogo.x++;
        mapajogo.cont++;
    }
} // fim da funcao que verifica se e possivel andar para baixo

void andardireita(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 1) { //Se for caixa, e uma parede depois
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 2) { //Se for caixa, e uma caixa depois
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 4) { //Se for caixa, e uma caixa no objetivo depois
        return;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 1){ //Se for caixa em um objetivo, e uma parede depois
        return;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 2){ //Se for caixa em um objetivo, e uma caixa depois
        return;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 0){ //Se for caixa na esquerda, e nada depois
        mapajogo.matriz[mapajogo.x][mapajogo.y+1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y+2] = 2;
        mapajogo.y++;
        mapajogo.cont++;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 3){ //Se for caixa, e um objetivo depois
        mapajogo.matriz[mapajogo.x][mapajogo.y+1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y+2] = 4;
        mapajogo.y++;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 0){ //Se for caixa em um objetivo, e nada depois
        mapajogo.matriz[mapajogo.x][mapajogo.y+1] = 3;
        mapajogo.matriz[mapajogo.x][mapajogo.y+2] = 2;
        mapajogo.y++;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 3){ //Se for caixa em um objetivo, e um objetivo depois
        mapajogo.matriz[mapajogo.x][mapajogo.y+1] = 3;
        mapajogo.matriz[mapajogo.x][mapajogo.y+2] = 4;
        mapajogo.y++;
        mapajogo.cont++;
    }else {
        mapajogo.y++;
        mapajogo.cont++;
    }
}// fim da funcao que verifica se e possivel andar para direita

void andaresquerda(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 1) { //Se for caixa na esquerda, e uma parede depois
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 2) { //Se for caixa na esquerda, e uma caixa depois
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 4) { //Se for caixa na esquerda, e uma caixa no objetivo depois
        return;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 1){ //Se for caixa em um objetivo, e uma parede depois
        return;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 2){ //Se for caixa em um objetivo, e uma caixa depois
        return;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 0){ //Se for caixa na esquerda, e nada depois
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 2;
        mapajogo.y--;
        mapajogo.cont++;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 3){ //Se for caixa na esquerda, e um objetivo depois
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 4;
        mapajogo.y--;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 0){ //Se for caixa em um objetivo, e nada depois
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 3;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 2;
        mapajogo.y--;
        mapajogo.cont++;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 4 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 3){ //Se for caixa em um objetivo, e um objetivo depois
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 3;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 4;
        mapajogo.y--;
        mapajogo.cont++;
    }else {
        mapajogo.y--;
        mapajogo.cont++;
    }
} // fim da funcao que verifica se e possivel andar para esquerda

bool movimentos(MAPA &mapajogo) {
    ///executa os movimentos
    if ( _kbhit() ){
        char tecla;
        tecla = getch();
        switch(tecla)
        {
            case 72: case 'w': ///cima
                andarcima(mapajogo);
                salvarultimo(mapajogo);
                return true;
            break;
            case 80: case 's': ///baixo
                andarbaixo(mapajogo);
                salvarultimo(mapajogo);
                return true;
            break;
            case 75:case 'a': ///esquerda
                andaresquerda(mapajogo);
                salvarultimo(mapajogo);
                return true;
            break;
            case 77: case 'd': ///direita
                andardireita(mapajogo);
                salvarultimo(mapajogo);
                return true;
            break;
            case 'l':
                voltarultimo(mapajogo); //ARRUMAR
                break;
            case 27:
                return false; //apenas retorna 2 se o input for ESC
            break;
        }
    }
    return 1;
} //funcao que le input do teclado e realiza funcoes a partir dele
