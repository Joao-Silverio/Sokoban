#include "cursor.cpp"
#include "mapas.cpp"
#include "movimentos.cpp"

void jogo(MAPA &mapajogo){
    system("Cls");
    int game, obj = 0;
    do{
        resetaCursor();

        cout << mapajogo.nome << "\n";

        game = movimentos(mapajogo);
        
        obj = objetivo(mapajogo);

        if(obj == 3){
            game = 2;
        }

        imprimeMapa(mapajogo);
        
        cout << "\nContador: " << mapajogo.cont;

    } while (game !=2);//fim do laço do jogo a partir do retorno 2 da funcao movimentos(apenas com o ESC)
    while(obj == 3){
        gameWinScreen(mapajogo); // tela de fim de jogo
        char tecla;
        tecla = getch();

        if(tecla == 27){ //se apertar a tecla ESC
            obj = 2; //o jogo chega ao fim
        }
    }
} // fim da funcao que funciona enquanto eu nao apertar ESC


void continuar(MAPA &mapajogo){
    if(mapajogo.mapa == 0){
        mapajogo.mapa = NovoJogo();
        carregamapa(mapajogo);
        jogo(mapajogo); // comeca o jogo com as variaveis atualizadas
    } else{
        jogo(mapajogo); //chama a funcao jogo com as variaveis guardadas anteriormente
    }
}