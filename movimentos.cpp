#include <conio.h>

void andarcima(int MJ[20][22], int &x, int &y) {
    if(MJ[x-1][y] == 1 ){
        return;
    } else if(MJ[x-1][y] == 2 && MJ[x-2][y] == 1) {
        return;
    } else if (MJ[x-1][y] == 2 && MJ[x-2][y] == 0){
        MJ[x-1][y] = 0;
        MJ[x-2][y] = 2;
        x--;
    }else {
        x--;
    }
}

void andarbaixo(int MJ[20][22], int &x, int &y) {
    if(MJ[x+1][y] == 1 ){
        return;
    } else if(MJ[x+1][y] == 2 && MJ[x+2][y] == 1) {
        return;
    } else if (MJ[x+1][y] == 2 && MJ[x+2][y] == 0){
        MJ[x+1][y] = 0;
        MJ[x+2][y] = 2;
        x++;
    }else {
        x++;
    }
}

void andardireita(int MJ[20][22], int &x, int &y) {
    if(MJ[x][y+1] == 1 ){
        return;
    } else if(MJ[x][y+1] == 2 && MJ[x][y+2] == 1) {
        return;
    } else if (MJ[x][y+1] == 2 && MJ[x][y+2] == 0){
        MJ[x][y+1] = 0;
        MJ[x][y+2] = 2;
        y++;
    }
    else {
        y++;
    }
}

void andaresquerda(int MJ[20][22], int &x, int &y) {
    if(MJ[x][y-1] == 1 ){
        return;
    } else if(MJ[x][y-1] == 2 && MJ[x][y-2] == 1) {
        return;
    } else if (MJ[x][y-1] == 2 && MJ[x][y-2] == 0){
        MJ[x][y-1] = 0;
        MJ[x][y-2] = 2;
        y--;
    }else if (MJ[x][y-1] == 2 && MJ[x][y-2] == 3){
        MJ[x][y-1] = 0;
        MJ[x][y-2] = 2;
        y--;
    } else {
        y--;
    }
}


int movimentos(int MJ[20][22], int &x, int &y) {
    ///executa os movimentos
    if ( _kbhit() ){
        char tecla;
        tecla = getch();
        switch(tecla)
        {
            case 72: case 'w': ///cima
                andarcima(MJ, x, y);
                return 1;
            break;
            case 80: case 's': ///baixo
                andarbaixo(MJ, x, y);
                return 1;
            break;
            case 75:case 'a': ///esquerda
                andaresquerda(MJ, x, y);
                return 1;
            break;
            case 77: case 'd': ///direita
                andardireita(MJ, x, y);
                return 1;
            break;
            case 27:
                return 2;
            break;
        }
    }
    return 1;
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