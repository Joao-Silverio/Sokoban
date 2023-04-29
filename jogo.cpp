#include "cursor.cpp"
#include "mapas.cpp"
#include "movimentos.cpp"

void jogo(MAPA &mapajogo){
    system("Cls");
    int game, obj = 0;
    do{
        resetaCursor();

        game = movimentos(mapajogo);

        obj = objetivo(mapajogo);

        if(obj == 3){
            game = 2;
        }

        imprimeMapa(mapajogo);
        cout << "\nContador: " << mapajogo.cont;

    } while (game !=2);//fim do laço do jogo a partir do retorno 2 da funcao movimentos(apenas com o ESC)
    while(obj == 3){
        gameWinScreen(mapajogo);
        char tecla;
        tecla = getch();

        if(tecla == 27){
            obj = 2;
        }
    }
} // fim da funcao que funciona enquanto eu nao apertar ESC
