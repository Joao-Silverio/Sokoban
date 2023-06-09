#include <iostream>
#include <fstream>
#include "ranking.cpp"

using namespace std;

void menu(int &index){
    system("Cls");
    cout << "1 - Novo Jogo\n";
    cout << "2 - Continuar\n";
    cout << "3 - Ranking de Jogadores\n";
    cout << "4 - Sobre\n";
    cout << "5 - Fim\n";
    cin >> index;
} // tela menu inicial

int NovoJogo(){
    int qualMapa;
    cout << "Qual o mapa que deseja jogar?\n";
    cout << "1- Simple Collection (3)\n";
    cout << "2- The First One (4)\n";
    cout << "3- loma 60 (4)\n";
    cout << "4- Aleatorio\n";
    cin >> qualMapa;
    if(qualMapa >= 4){
        qualMapa = rand()%3 + 1;
    }
    return qualMapa;
} // tela de selecionar mapa

void sobre(){
    char tecla;
    do
    {
        system("Cls");
        cout << "Aluno: Joao Victor Silverio \n";
        cout << "Data: Abril/2023 \n";
        cout << "Professor: Thiago Felski Pereira\n";
        cout << "Instrucoes:\n" << "Sokoban e japones para guardiao do armazem\n" ;
        cout << "Este jogo de quebra-cabeca foi originalmente inventado no Japao no inicio dos anos 80.\n";
        cout << "Voce deve empurrar as caixas para seus locais apropriados com um numero minimo de movimentos.\n";
        cout << "\n" << "Pressione ESC para voltar ao menu";

        tecla = getch();

    } while (tecla != 27);
} //tela sobre o jogo desenvolvido


void gameWinScreen(MAPA &mapajogo){
    cout << "\nParabens voce venceu o jogo em " << mapajogo.cont << " movimentos";
    cout << "\nDeseja salvar seus movimentos? Digite 1\n";
    cout << "Se nao deseja digite 2\n";
    int salvar;
    cin>>salvar;
    if(salvar == 1){
        ordena_ranking(mapajogo);
    }
    mapajogo.mapa = 0;
    cout << "\nPara retornar ao menu aperte ESC";
} // mensagem de game Win
