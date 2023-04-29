#include "telas.cpp"

int verifica(MAPA &mapajogo){
    bool flag = 0;
    for(int i=0; i<mapajogo.linha; i++){
        for(int j=0; j<mapajogo.coluna; j++){
            if(mapajogo.matriz[i][j] == 3){
                flag = 1;
                return 1;
                break;
            }
        }
        if(flag ==1 ){
            return 1;
            break;
        }
    }
    if(flag == 0){
        return 3;
    }
}

void imprimeobjetivos(MAPA &mapajogo){
    if(mapajogo.matriz[mapajogo.obj1x][mapajogo.obj1y] == 0){
        mapajogo.matriz[mapajogo.obj1x][mapajogo.obj1y] = 3;
    }
    if(mapajogo.matriz[mapajogo.obj2x][mapajogo.obj2y] == 0){
        mapajogo.matriz[mapajogo.obj2x][mapajogo.obj2y] = 3;
    }
    if(mapajogo.matriz[mapajogo.obj3x][mapajogo.obj3y] == 0){
        mapajogo.matriz[mapajogo.obj3x][mapajogo.obj3y] = 3;
    }
}

int objetivo(MAPA &mapajogo){
    int verificar;
    verificar = verifica(mapajogo);  //verificar se todas as caixas estao no objetivo
    imprimeobjetivos(mapajogo); //imprime os objetivos novamente se forem trocados para 0
    return verificar;
} //chama a funcao objetivo de um mapa especifico
