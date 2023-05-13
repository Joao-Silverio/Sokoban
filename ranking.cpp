#include <algorithm>
#include <stdio.h>

int tamanho_ranking(){
    fstream arquivo;
    string frase;
    int tam = 0;
    arquivo.open("ranking.txt");
    if(arquivo.is_open()) {
        while(arquivo.eof() == false){
            getline(arquivo, frase);
            tam++;
        }
        arquivo.close();
        return tam;
    }
    else {
        cout << "Nao foi poss�vel salvar seu ranking";
        return tam;
    }
    arquivo.close();

}

void imprime_ranking(string *vet, int tam){
    fstream arquivo;
    arquivo.open("ranking.txt");
    if(arquivo.is_open()) {
        for(int i=0; i<tam;i++){
            arquivo << vet[i] << "\n";
        }
        arquivo.close();
    }
}

void escreve_ranking(MAPA mapajogo){
    fstream arquivo;
    arquivo.open("ranking.txt", ios_base::app);
    if(arquivo.is_open()) {
        arquivo << "MAPA " << mapajogo.mapa << ": " << mapajogo.cont << "\n";

        arquivo.close();
        return;
    }
    else {
        cout << "Nao foi poss�vel salvar seu ranking";
        return;
    }
}

void ordena_ranking(MAPA mapajogo){
    fstream arquivo;
    string frase;
    int tam, i = 0;
    tam = tamanho_ranking() + 1;
    string *vet, temp;
    vet = new string[tam];
    //escreve_ranking(mapajogo);
    arquivo.open("ranking.txt");
    if(arquivo.is_open()) {
        while(arquivo.eof() == false){
            getline(arquivo, frase);
            vet[i] = frase;
            i++;

        }

        for(int j=0;j<tam;j++){
            for(i=0;i<tam - 1 ;i++){
                if(vet[i] > vet[i+1]){
                    temp = vet[i];
                    vet[i] = vet[i +1];
                    vet[i + 1] = temp;
                }
            }
        }
        imprime_ranking(vet, tam);
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
        while(stream.eof() == false){
            getline(stream, frase);
            cout << frase << "\n";
        }
        stream.close();
    } else {
        cout<<"nao foi possivel abrir esse arquivo";
    }
    cout <<"\nPressione ESC para voltar ao menu";
    do{

        tecla = getch();
    }while (tecla != 27);
}
