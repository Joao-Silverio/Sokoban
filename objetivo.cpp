#include "telas.cpp"

bool objetivo(MAPA &mapajogo){
    bool flag = 0;
    for(int i=0; i<mapajogo.linha; i++){
        for(int j=0; j<mapajogo.coluna; j++){
            if(mapajogo.matriz[i][j] == 3){
                flag = 1;
                return true;
                break;
            }
        }
        if(flag ==1 ){
            return true;
            break;
        }
    }
    if(flag == 0){
        return false; //se nao houver objetivos sem caixa retorna falso
    }
    return true;
} //chama a funcao objetivo