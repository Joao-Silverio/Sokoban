#include "jogo.cpp"

int main()
{
    piscaCursor();

    //Posi��o inicial do personagem no console
    MAPA mapajogo;
    int index, mapa;
    int tecla;
    

    do
    {
        menu(index);

        switch (index)
        {
        case 1:
            mapa = NovoJogo(); //variavel recebe valor do mapa(1, 2, 3)
            mapajogo.arquivo="mapas/mapa2.txt";
            mapajogo.carrega();
            mapajogo.x = 1;
            mapajogo.y = 14;
            mapajogo.obj1x = 6;
            mapajogo.obj1y = 1;
            mapajogo.obj2x = 7;
            mapajogo.obj2y = 2;
            mapajogo.obj3x = 8;
            mapajogo.obj3y = 1;
            jogo(mapajogo, mapa); // comeca o jogo com as variaveis atualizadas
            break;
        case 2:
            jogo(mapajogo, mapa); //chama a funcao jogo com as variaveis guardadas anteriormente
            break;
        case 3:
            sobre(); // funcao sobre o programa
            break;
        case 4:
            tecla = 4; // dar fim ao programa
        default:
            break;
        }
    } while (tecla != 4);

    return 0;
 //fim main
}
