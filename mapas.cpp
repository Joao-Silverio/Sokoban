#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

struct MAPA {
    char *arquivo;
    int linha,coluna, x, y;
    int matriz[20][22];
    int obj1x, obj1y;
    int obj2x, obj2y;
    int obj3x, obj3y;

    void carrega(){
        ifstream stream;
        stream.open(arquivo);

        if (stream.is_open()){
            stream>>linha;
            stream>>coluna;
            for(int i=0; i<linha; i++){
                for(int j=0; j<coluna; j++){
                    stream>>matriz[i][j];
                }
            }
        stream.close();
        } else {
            cout<<"nao foi possivel abrir esse arquivo";
        }
    }
};

void imprimeMapa(MAPA mapajogo) {
    ///Imprime o jogo: mapa e personagem.
        for(int i=0;i<mapajogo.linha;i++){
            for(int j=0;j<mapajogo.coluna;j++){
                if(i==mapajogo.x && j==mapajogo.y){
                    cout<<char(2); //personagem
                } else {
                    switch (mapajogo.matriz[i][j]){
                        case 0: cout<<" "; break; //caminho
                        case 1: cout<<char(219); break; //parede
                        case 2: cout <<char(4); break; // caixa
                        case 3: cout <<char(176); break; //objetivo
                        //default: cout<<"-"; //erro
                    } //fim switchs
                }
            }
            cout<<"\n";
        } //fim for mapa

        cout << "\n" << "Pressione ESC para voltar ao menu";
} //fim da funcao que imprime meu mapa, com parede caixas e objetivos

void carregamapa1(MAPA &mapajogo){
    MAPA mapa1;
    mapa1.arquivo="mapas/mapa1.txt";
    mapa1.carrega();
    mapa1.x = 12;
    mapa1.y = 11;
    mapa1.obj1x = 12;
    mapa1.obj1y = 11;
    mapajogo = mapa1;
} //funcao que carrega minha matriz com o mapa 1 para a matriz de jogo atual


void carregamapa2(MAPA &mapajogo){
    MAPA mapa2;
    mapa2.arquivo="mapas/mapa2.txt";
    mapa2.carrega();
    mapa2.x = 1;
    mapa2.y = 14;
    mapa2.obj1x = 6;
    mapa2.obj1y = 1;
    mapa2.obj2x = 7;
    mapa2.obj2y = 2;
    mapa2.obj3x = 8;
    mapa2.obj3y = 1;
    mapajogo = mapa2;
} //funcao que carrega minha matriz com o mapa 2 para a matriz de jogo atual


void carregamapa3(MAPA &mapajogo){
    MAPA mapa3;
    mapa3.arquivo="mapas/mapa3.txt";
    mapa3.carrega();
    mapa3.x = 2;
    mapa3.y = 9;
    mapa3.obj1x = 1;
    mapa3.obj1y = 6;
    mapa3.obj2x = 2;
    mapa3.obj2y = 6;
    mapa3.obj3x = 3;
    mapa3.obj3y = 6;   
    mapajogo = mapa3;
} //funcao que carrega minha matriz com o mapa 3 para a matriz de jogo atual

MAPA carregam(){
    MAPA mapa1;
    mapa1.arquivo="mapas/mapa1.txt";
    mapa1.carrega();
    mapa1.x = 12;
    mapa1.y = 11;
    mapa1.obj1x = 12;
    mapa1.obj1y = 11;
    return mapa1;
}