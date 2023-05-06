#include "jogo.cpp"

int main()
{
    piscaCursor();
    MAPA mapajogo;
    int index;
    int tecla;
    string nome;

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
                break;
            default:
                break;
        }
    } while (tecla != 5);

    return 0;
} //fim main
//salvar jogo em arquivo(precisa), voltar movimento para um numero exato.

//funcao de carregar movimento como um novo jogo, carrega mapa dnv e realiza os movimentos que foram feitos ate o movimento de escolha
//ranking no csv com funcao de ordenar é mais facil, mas por desafio fazer no c++ com o txt
