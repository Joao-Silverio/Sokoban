#include "telas.cpp"


void objetivomapa1(int MJ[20][22]){
    //verificar se todas as caixas estao no objetivo
    int obj1x = 12;
    int obj1y = 11;
    if(MJ[obj1x][obj1y] == 2) {
        gameWinScreen();
    }
} //verifica se minha caixa esta no objetivo do mapa 1

void objetivomapa2(int MJ[20][22]){
    //verificar se todas as caixas estao no objetivo
    int obj1x = 6;
    int obj1y = 1;
    int obj2x = 7;
    int obj2y = 2;
    int obj3x = 8;
    int obj3y = 1;
    
    if(MJ[obj1x][obj1y] == 2 && MJ[obj2x][obj2y] == 2 && MJ[obj3x][obj3y] == 2) {
        gameWinScreen();
    }
} //verifica se minhas caixas estao no objetivo do mapa 2

void objetivomapa3(int MJ[20][22]){
    //verificar se todas as caixas estao no objetivo
    int obj1x = 1;
    int obj1y = 6;
    int obj2x = 2;
    int obj2y = 6;
    int obj3x = 3;
    int obj3y = 6;
    if(MJ[obj1x][obj1y] == 2 && MJ[obj2x][obj2y] == 2 && MJ[obj3x][obj3y] == 2) {
        gameWinScreen();
    }
} //verifica se minhas caixas estao no objetivo do mapa 3

void objetivo(int MJ[20][22], int mapa){
    //verificar se todas as caixas estao no objetivo
    switch (mapa)
    {
    case 1:
        objetivomapa1(MJ);
        break;
    case 2:
        objetivomapa2(MJ);
        break;
    case 3:
        objetivomapa3(MJ);
        break;
    default:
        break;
    }
} //chama a funcao objetivo de um mapa especifico