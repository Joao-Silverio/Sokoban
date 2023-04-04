#include <iostream>

using namespace std;

void menu(int &index){
    system("Cls");
    cout << "1 - Novo Jogo\n";
    cout << "2 - Continuar\n";
    cout << "3 - Sobre\n";
    cout << "4 - Fim\n";
    cin >> index;
}


int NovoJogo(){
    int qualMapa;
    cout << "Qual o mapa que deseja jogar?\n";
    cout << "1- Simple Collection (3)\n";
    cout << "2- The First One (4)\n";
    cout << "3- loma 60 (4)\n";
    cin >> qualMapa;
    return qualMapa;
}

void sobre(){
    char tecla;
    do
    {
        system("Cls");
        cout << "Joao Victor Silverio \n";
        cout << "Abril/2023 \n";
        cout << "Nome do Professor\n";
        cout << "Regras do jogo\n";
        cout << "\n" << "Pressione ESC para voltar ao menu";
        
        tecla = getch();
        
    } while (tecla != 27);   
}
/*
bool gameWinScreen(){
    cout << "Congratulations";
}


bool gameOver(int mapa, int MJ[20][22]) {
    //caixas estao no objetivo?
    int obj1x, obj1y;
    int obj2x, obj2y;
    int obj3x, obj3y;

    if (mapa == 1){
        obj1x = 12;
        obj1y = 11;
        if(MJ[obj1x][obj1y] == 2) {
            gameWinScreen();
        }

    } else if (mapa == 2){
        obj1x = 6;
        obj1y = 1;
        obj2x = 7;
        obj2y = 2;
        obj3x = 8;
        obj3y = 1;
        if(MJ[obj1x][obj1y] == 2 && MJ[obj2x][obj2y] == 2 && MJ[obj3x][obj3y] == 2) {
            gameWinScreen();
        }
        
    } else if (mapa==3) {
        obj1x = 1;
        obj1y = 6;
        obj2x = 2;
        obj2y = 6;
        obj3x = 3;
        obj3y = 6;
        if(MJ[obj1x][obj1y] == 2 && MJ[obj2x][obj2y] == 2 && MJ[obj3x][obj3y] == 2) {
            gameWinScreen();
        }
    } else return false;
}*/