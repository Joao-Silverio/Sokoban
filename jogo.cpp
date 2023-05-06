#include "mapas.cpp"
#include "movimentos.cpp"

void jogo(MAPA &mapajogo){
    system("Cls");
    bool game, obj = true;
    do{
        resetaCursor();

        game = movimentos(mapajogo);

        obj = objetivo(mapajogo);

        if(obj == false){
            game = false;
        }

        imprimeMapa(mapajogo);

        cout << "\nContador: " << mapajogo.cont;

    } while (game == true);//fim do laço do jogo a partir do retorno 2 da funcao movimentos(apenas com o ESC)

    while(obj == false){
        gameWinScreen(mapajogo); // tela de fim de jogo
        char tecla;
        tecla = getch();

        if(tecla == 27){ //se apertar a tecla ESC
            obj = true; //o jogo chega ao fim
        }
    }
} // fim da funcao que funciona enquanto eu nao apertar ESC

void inicio(MAPA &mapajogo){ //funcao inicio, com menu de escolha de mapa
    apagarmovimentos();
    mapajogo.mapa = NovoJogo(); //variavel recebe valor do mapa(1, 2, 3)
    mapajogo.cont = 0;
    carregamapa(mapajogo);
    jogo(mapajogo); // comeca o jogo com as variaveis atualizadas
}

void continuar(MAPA &mapajogo){ //funcao continuar
    if(mapajogo.mapa == 0){ //se aplicativo for aperto e nao tiver nenhum mapa carregado
        inicio(mapajogo);
    } else{
        jogo(mapajogo); //chama a funcao jogo com as variaveis guardadas anteriormente
    }
}
