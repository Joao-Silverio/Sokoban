#include <iostream>

using namespace std;

void inicio(){
    cout << "1 - Novo Jogo\n";
    cout << "2 - Continuar\n";
    cout << "3 - Sobre\n";
    cout << "4 - Fim\n";
    int index;
    cin >> index;
    if(index == 1) {

    } else if(index == 1) {
        //NovoJogo(qualMapa);
    } else if(index == 2) {
        //continuar();
    } else if(index == 3) {
        cout << "João Victor Silvério \n";
        cout << "Abril/2023 \n";
        cout << "Nome do Professor";
        cout << "Regras do jogo";
    } else {
        cout << "Digite um valor válido";
    }
}


int NovoJogo(){
    int qualMapa;
    cout << "Qual o mapa que deseja jogar?\n";
    cin >> qualMapa;
    return qualMapa;
}

bool gameWinScreen(){
    cout << "Congratulations";
}


bool gameOver(int mapa, int MJ[20][22]) {
    //caixas estao no objetivo?
    int obj1x, obj1y;
    //int obj2x, obj2y;
    //int obj3x, obj3y;

    if (mapa == 1){
        obj1x = 12;
        obj1y = 11;

    } else if (mapa == 2){
        
    } else if (mapa==3) {
        
    }
    if(MJ[obj1x][obj1y] == 2) {
        gameWinScreen();
    } else return false;
}