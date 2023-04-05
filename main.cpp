#include "jogo.cpp"

int main()
{
    piscaCursor();

    //Posi��o inicial do personagem no console
    int x, y;
    int MJ[20][22] = {0}; //mapa do jogo que sera carregado 
    int index, mapa;
    int tecla;
    
    do
    {       
        menu(index);

        switch (index)
        {
        case 1:
            mapa = NovoJogo(); //variavel recebe valor do mapa(1, 2, 3)
            LoadMap(mapa, MJ); // carrega o mapa escolhido para o mapa de jogo atual
            LoadPosicao(mapa, x, y); // carrega a posicao de x e y do mapa
            jogo(MJ, x, y, mapa); // comeca o jogo com as variaveis atualizadas
            break;
        case 2:
            jogo(MJ, x, y, mapa); //chama a funcao jogo com as variaveis guardadas anteriormente
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
} //fim main