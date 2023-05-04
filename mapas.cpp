#include <iostream>
#include <conio.h>
#include <fstream>


using namespace std;

struct MAPA {
    char *arquivo;
    int linha = 0 ,coluna = 0, x, y;
    int matriz[20][22];
    int mapa = 0;
    int cont = 0;
    int movant = 0;
    string nome;

    void carregatudo(){
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
            stream>>nome;            
            stream.close();
        } else {
            cout<<"nao foi possivel abrir esse arquivo";
        }
    }

};

void colorir (int cor) {
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(out, cor);
}

void imprimeMapa(MAPA mapajogo) {
    ///Imprime o jogo: mapa e personagem.
        for(int i=0;i<mapajogo.linha;i++){
            for(int j=0;j<mapajogo.coluna;j++){
                if(i==mapajogo.x && j==mapajogo.y){
                    colorir(10); //colorir faz com que a escrita a seguir seja com a cor n�mero 10
                    cout<<char(2); //personagem
                    colorir(7); //volta a cor da escrita ao default
                } else {
                    switch (mapajogo.matriz[i][j]){
                        case 0: cout<<" "; break; //caminho
                        case 1: cout<<char(219); break; //parede
                        case 2: cout <<char(4); break; // caixa
                        case 3: cout <<char(176); break; //objetivo
                        case 4:
                            colorir(9);
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

void carregamapa(MAPA &mapajogo){
    switch (mapajogo.mapa)
    {
        case 1:
            mapajogo.arquivo="mapas/mapa4.txt";
            mapajogo.carregatudo();
            break;
        case 2:
            mapajogo.arquivo="mapas/mapa5.txt";
            mapajogo.carregatudo();
            break;
        case 3:
            mapajogo.arquivo="mapas/mapa6.txt";
            mapajogo.carregatudo();
            break;
        default:
            break;
    }
}
