#include <stdio.h>
#include "movimentos.hpp"

void apagarmovimentos(){
    remove("movimentos.txt");
}

void LoadMovimentos(MAPA &mapajogo, char *vet, int tam){
    system("Cls");
    mapajogo.cont = 0;
    for(int i = 0; i < tam; i++){
        switch (vet[i])
        {
            case 'w':
                andarcima(mapajogo);
                break;
            case 's':
                andarbaixo(mapajogo);
                break;
            case 'a':
                andaresquerda(mapajogo);
                break;
            case 'd':
                andardireita(mapajogo);
                break;
            default:
                break;
        }
    }
}

void voltarultimo(MAPA &mapajogo){
    system("Cls");
    int mov;
    cout << "Para qual movimento deseja voltar \n";
    cout << "Voce esta no movimento: " << mapajogo.cont << " \n";
    cin >> mov;
    char *vet;
    vet = new char[mov];
    mapajogo.carregatudo();
    fstream arquivo;
    arquivo.open("movimentos.txt");
    if (arquivo.is_open()){
       for (int i = 0; i <= mov; i++)
       {
            arquivo >> vet[i];
       }
        arquivo.close();
        apagarmovimentos();
        LoadMovimentos(mapajogo, vet, mov);
    } else {
        cout<<"nao foi possivel abrir esse arquivo";
    }
}

void salvarultimo(string mov){
    ofstream arquivo;
    arquivo.open("movimentos.txt", ios::app);
    if(arquivo.is_open()) {
        arquivo << "\n" << mov;
        arquivo.close();
    }
    else {
        cout << "Nao foi poss�vel salvar seu movimento";
        return;
    }
    arquivo.close();
}
