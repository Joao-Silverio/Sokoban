#include "jogo.cpp"

int main()
{
    piscaCursor();

    //Posi��o inicial do personagem no console
    int x, y;
    int MJ[20][22] = {0};
    int index, mapa;
    int tecla;
    
    do
    {       
        menu(index);

        switch (index)
        {
        case 1:
            mapa = NovoJogo();
            LoadMap(mapa, MJ);
            LoadPosicao(mapa, x, y);
            jogo(MJ, x, y);
            break;
        case 2:
            jogo(MJ, x, y);
            break;
        case 3: 
            sobre();
            break;
        case 4: 
            tecla = 4;
        default:
            break;
        }
    } while (tecla != 4);
    
    return 0;
} //fim main