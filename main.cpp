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
            case 1:
                mapajogo.mapa = NovoJogo(); //variavel recebe valor do mapa(1, 2, 3)
                mapajogo.cont = 0;
                carregamapa(mapajogo);
                jogo(mapajogo); // comeca o jogo com as variaveis atualizadas
                break;
            case 2:
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
//arquivos com todas as informacoes(precisa), salvar jogo em arquivo(precisa), voltar movimento para um numero exato.
