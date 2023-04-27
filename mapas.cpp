#include <iostream>
#include <conio.h>
#include <fstream>


using namespace std;

struct MAPA {
    char *arquivo;
    int linha,coluna, x, y;
    int matriz[20][22];

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
        } else {
            cout<<"nao foi";
        }
    }

};


void imprimeMapa(MAPA mapajogo, int x, int y) {
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

void carregamapa1(MAPA mapajogo){
    MAPA mapa1;
    mapa1.arquivo="mapas/mapa3.txt";
    mapa1.carrega();
    mapa1.x = 12;
    mapa1.y = 11;
    mapajogo = mapa1;
} //funcao que carrega minha matriz com o mapa 1 para a matriz de jogo atual


void carregamapa2(){
    int m2[20][22]={0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,1,0,2,1,0,0,1,1,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,1,0,0,0,2,0,1,1,1,0,0,0,0,0,
                    1,1,1,1,1,1,1,1,1,0,0,0,1,0,1,1,1,0,0,0,0,0,
                    1,3,0,0,0,0,0,1,1,0,0,0,2,0,0,0,1,0,0,0,0,0,
                    1,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
                    1,3,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
                    1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


} //funcao que carrega minha matriz com o mapa 2 para a matriz de jogo atual


void carregamapa3(){
    int m3[20][22] ={0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
                    1,1,1,1,0,2,3,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
                    1,0,0,0,0,2,3,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,
                    1,0,0,0,1,2,3,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,
                    1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


} //funcao que carrega minha matriz com o mapa 3 para a matriz de jogo atual


