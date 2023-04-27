#include "jogo.cpp"


int main()
{
    piscaCursor();

    //Posi��o inicial do personagem no console
    MAPA mapajogo;
    int x, y;
    int index, mapa;
    int tecla;

    do
    {
        menu(index);

        switch (index)
        {
        case 1:
            mapa = NovoJogo(); //variavel recebe valor do mapa(1, 2, 3)
            MAPA mapa1;
            mapa1.arquivo="mapas/mapa1.txt";
            mapa1.carrega();
            mapa1.x = 12;
            mapa1.y = 11;
            mapajogo = mapa1;
            jogo(mapajogo, x, y, mapa); // comeca o jogo com as variaveis atualizadas
            break;
        case 2:
            //jogo(MJ, x, y, mapa); //chama a funcao jogo com as variaveis guardadas anteriormente
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
