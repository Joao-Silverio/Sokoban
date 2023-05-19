#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string>
#include "cursor.cpp"

using namespace std;

struct MAPA {
    char *arquivo;
    int linha,coluna = 0, x, y;
    int matriz[20][22];
    int mapa = 0;
    int cont = 0;

    void carregatudo(){ //funcao carrega arquivo com as informacoes do mapa
        ifstream stream;
        stream.open(arquivo);

        if (stream.is_open()){
            stream>>x;
            stream>>y;
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
                    colorir(14); //colorir faz com que a escrita a seguir seja com a cor n�mero 10
                    cout<<char(2); //personagem
                    colorir(7); //volta a cor da escrita ao default
                } else {
                    switch (mapajogo.matriz[i][j]){
                        case 0:
                            cout<<" ";
                            break; //caminho
                        case 1:
                            colorir(8);
                            cout<<char(219);
                            colorir(7);
                            break; //parede
                        case 2:
                            colorir(6);
                            cout <<char(4);
                            colorir(7);
                            break; // caixa
                        case 3:
                            colorir(9);
                            cout <<char(176);
                            colorir(9);
                            break; //objetivo
                        case 4:
                            colorir(2);
                            cout <<char(4);
                            colorir(7);
                            break; //caixa no objetivo
                        //default: cout<<"-"; //erro
                    } //fim switchs
                }
            }
            cout<<"\n";
        } //fim for mapa

        cout << "\n" << "Pressione ESC para voltar ao menu";
        cout << "\nPressione L para voltar 1 movimento";
} //fim da funcao que imprime meu mapa, com parede caixas e objetivos

void carregamapa(MAPA &mapajogo){ //carrega mapa especifico com as informacoes fornecidas
    switch (mapajogo.mapa)
    {
        case 1:
            mapajogo.arquivo = "mapas/mapa4.txt";
            mapajogo.carregatudo();
            break;
        case 2:
            mapajogo.arquivo = "mapas/mapa5.txt";
            mapajogo.carregatudo();
            break;
        case 3:
            mapajogo.arquivo = "mapas/mapa6.txt";
            mapajogo.carregatudo();
            break;
        default:
            break;
    }
}
