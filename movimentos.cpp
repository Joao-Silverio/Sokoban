#include <conio.h>

void andarcima(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 1) {
        return;
    } else if(mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 2) {
        return;
    } else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 0){
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x-2][mapajogo.y] = 2;
        mapajogo.x--;
    } else if (mapajogo.matriz[mapajogo.x-1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x-2][mapajogo.y] == 3){
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x-1][mapajogo.y] = 2;
        mapajogo.x--;
    }else {
        mapajogo.x--;
    }
} // fim da funcao que verifica se e possivel andar para cima

void andarbaixo(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 1) {
        return;
    }
    else if(mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 2) {
        return;
    }else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 0){
        mapajogo.matriz[mapajogo.x+1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x+2][mapajogo.y] = 2;
        mapajogo.x++;
    } else if (mapajogo.matriz[mapajogo.x+1][mapajogo.y] == 2 && mapajogo.matriz[mapajogo.x+2][mapajogo.y] == 3){
        mapajogo.matriz[mapajogo.x+1][mapajogo.y] = 0;
        mapajogo.matriz[mapajogo.x+2][mapajogo.y] = 2;
        mapajogo.x++;
    }else {
        mapajogo.x++;
    }
} // fim da funcao que verifica se e possivel andar para baixo

void andardireita(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 1) {
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 2) {
        return;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 0){
        mapajogo.matriz[mapajogo.x][mapajogo.y+1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y+2] = 2;
        mapajogo.y++;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y+1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y+2] == 3){
        mapajogo.matriz[mapajogo.x][mapajogo.y+1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y+2] = 2;
        mapajogo.y++;
    }
    else {
        mapajogo.y++;
    }
}// fim da funcao que verifica se e possivel andar para direita

void andaresquerda(MAPA &mapajogo) {
    if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 1 ){
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 1) {
        return;
    } else if(mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 2) {
        return;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 0){
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 2;
        mapajogo.y--;
    }else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 3){
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 2;
        mapajogo.y--;
    } else if (mapajogo.matriz[mapajogo.x][mapajogo.y-1] == 2 && mapajogo.matriz[mapajogo.x][mapajogo.y-2] == 3){
        mapajogo.matriz[mapajogo.x][mapajogo.y-1] = 0;
        mapajogo.matriz[mapajogo.x][mapajogo.y-2] = 2;
        mapajogo.y--;
    } else {
        mapajogo.y--;
    }
} // fim da funcao que verifica se e possivel andar para esquerda


int movimentos(MAPA &mapajogo) {
    ///executa os movimentos
    if ( _kbhit() ){
        char tecla;
        tecla = getch();
        switch(tecla)
        {
            case 72: case 'w': ///cima
                andarcima(mapajogo);
                return 1;
            break;
            case 80: case 's': ///baixo
                andarbaixo(mapajogo);
                return 1;
            break;
            case 75:case 'a': ///esquerda
                andaresquerda(mapajogo);
                return 1;
            break;
            case 77: case 'd': ///direita
                andardireita(mapajogo);
                return 1;
            break;
            case 27:
                return 2; //apenas retorna 2 se o input for ESC
            break;
        }
    }
    return 1;
} //funcao que le input do teclado e realiza funcoes a partir dele
