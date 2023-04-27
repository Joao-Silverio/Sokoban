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
            mapajogo = carregamapa(mapa);
            cout << mapajogo.x;
            jogo(mapajogo); // comeca o jogo com as variaveis atualizadas
            break;
        case 2:
            jogo(mapajogo); //chama a funcao jogo com as variaveis guardadas anteriormente
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
