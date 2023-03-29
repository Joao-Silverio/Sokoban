#include "cursor.cpp"
#include "mapas.cpp"
#include "movimentos.cpp"

int main()
{
    piscaCursor();

    //Posi��o inicial do personagem no console
    int x, y;
    int qualMapa;
    cout << "Qual o mapa que deseja jogar";
    cin >> qualMapa;

    LoadPosicao(qualMapa, x, y);

    system("Cls");
    do{
        resetaCursor();

        LoadMap(qualMapa, x, y);

        movimentos(x, y);

    } while (x != 50);//fim do laço do jogo

    return 0;
} //fim main