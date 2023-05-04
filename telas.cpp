#include <iostream>
#include <fstream>


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
    if(qualMapa == 4){
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

void escrever_ranking(MAPA mapajogo){
    ofstream arquivo;
    arquivo.open("ranking.txt", ios_base::app);
    if(arquivo.is_open()) {
        arquivo << "Seu ranking no mapa " << mapajogo.nome << " e " << mapajogo.cont << "\n";
        arquivo.close();
        cout <<"\nRanking salvo com sucesso";
        return;
    }
    else {
        cout << "Nao foi poss�vel salvar seu ranking";
        return;
    }
    arquivo.close();
}

void ler_ranking(){
    char tecla;
    ifstream stream;
    string frase;
    stream.open("ranking.txt");

    if (stream.is_open()){
        getline(stream, frase);
        cout << frase;
        stream.close();
    } else {
        cout<<"nao foi possivel abrir esse arquivo";
    }
    cout <<"\nPressione ESC para voltar ao menu";
    do{
        tecla = getch();
    }while (tecla != 27);
}

void gameWinScreen(MAPA &mapajogo){
    cout << "\nParabens voce venceu o jogo em " << mapajogo.cont << " movimentos";
    cout << "\nDeseja salvar seus movimentos? Digite 1\n";
    cout << "Se nao deseja digite Digite 2\n";
    int salvar;
    cin>>salvar;
    if(salvar == 1){
        escrever_ranking(mapajogo);
    }
    mapajogo.mapa = 0;
    cout << "\nPara retornar ao menu aperte ESC";
} // mensagem de game Win

