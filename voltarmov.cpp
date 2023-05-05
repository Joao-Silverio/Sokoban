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
    int mov, aux;
    string frase;
    cout << "\n Para quual movimento deseja voltar";
    cin >> mov;
    mov += 30;
    fstream arquivo;
    arquivo.open("movimentos.txt");
    if (arquivo.is_open()){
        while (arquivo.eof() == false)
        {
            //getline(arquivo, aux);
            arquivo >> aux;
            if(mov == aux){
                arquivo>>mapajogo.x;
                arquivo>>mapajogo.y;
                for(int i=0; i<mapajogo.linha; i++){
                    for(int j=0; j<mapajogo.coluna; j++){
                        arquivo>>mapajogo.matriz[i][j];
                    }
                }
                mapajogo.cont = mov - 30;
                arquivo << "Ultimo movimento\n";
                arquivo.close();        
            } 
        }
        
    } else {
        cout<<"nao foi possivel abrir esse arquivo";
    }
}

void salvarultimo(MAPA mapajogo){
    ofstream arquivo;
    string frase;
    arquivo.open("movimentos.txt", ios::app);
    if(arquivo.is_open()) {
        arquivo << mapajogo.cont + 30 << "\n";
        arquivo << mapajogo.x << " ";
        arquivo << mapajogo.y << "\n";
        for(int i=0; i<mapajogo.linha; i++){
            for(int j=0; j<mapajogo.coluna; j++){
                arquivo << mapajogo.matriz[i][j] << " ";
            }   
            arquivo << endl;
        }
        arquivo.close();
    }
    else {
        cout << "Nao foi poss�vel salvar seu ranking";
        return;
    }
    arquivo.close();
}