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
    return 1;
}

int objetivo(MAPA &mapajogo){
    int verificar;
    verificar = verifica(mapajogo);  //verificar se todas as caixas estao no objetivo
    return verificar;
} //chama a funcao objetivo de um mapa especifico
