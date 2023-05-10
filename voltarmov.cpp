#include <stdio.h>
#include "movimentos.hpp"

void apagarmovimentos(){
    remove("movimentos.txt");
}

void voltarultimo(MAPA &mapajogo){
    int mov;
    char movimento;
    cout << "\n Para qual movimento deseja voltar";
    cin >> mov;
    mapajogo.carregatudo();
    fstream arquivo;
    arquivo.open("movimentos.txt");
    if (arquivo.is_open()){
       for (int i = 0; i <= mov; i++)
       {
            arquivo >> movimento;
            switch (movimento)
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
       arquivo.close();
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
        cout << "Nao foi poss�vel salvar seu ranking";
        return;
    }
    arquivo.close();
}