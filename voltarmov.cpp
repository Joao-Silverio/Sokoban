void apagararquivo(){
    ofstream arquivo;
    arquivo.open("movimentos.txt");
    if (arquivo.is_open()){
        arquivo << "\n";
        arquivo.close();
    } else {
        cout<<"nao foi possivel abrir esse arquivo";
    }
}

void voltarultimo(MAPA &mapajogo){
    int mov;
    string frase;
    cout << "\n Para quual movimento deseja voltar";
    cin >> mov;
    fstream arquivo;
    arquivo.open("movimentos.txt");
    if (arquivo.is_open()){
        for(int i = 0; i <= mov; i++){
            arquivo >> frase;
        }
        arquivo.close();
        cout << frase;
    } else {
        cout<<"nao foi possivel abrir esse arquivo";
    }
}

void salvarultimo(string mov){
    ofstream arquivo;
    arquivo.open("movimentos.txt", ios::app);
    if(arquivo.is_open()) {
        arquivo << mov << "\n";
        arquivo.close();
    }
    else {
        cout << "Nao foi poss�vel salvar seu ranking";
        return;
    }
    arquivo.close();
}