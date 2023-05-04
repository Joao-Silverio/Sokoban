#include "jogo.cpp"

int main()
{
    piscaCursor();
    MAPA mapajogo;
    int index;
    int tecla;

    do
    {
        menu(index);

        switch (index)
        {
            case 1: //funcao de inicio para escolher um mapa
                inicio(mapajogo);
                break;
            case 2: //funcao para continuar de onde parou
                continuar(mapajogo);
                break;
            case 3: //funcao ler ranking de jogadores salvos em um arquivo
                ler_ranking();
                break;
            case 4:
                sobre(); // funcao sobre o programa
                break;
            case 5:
                tecla = 5; // dar fim ao programa
            default:
                break;
        }
    } while (tecla != 5);

    return 0;
} //fim main
//salvar jogo em arquivo(precisa), voltar movimento para um numero exato.