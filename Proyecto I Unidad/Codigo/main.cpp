#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{

    int opcion = 0;

    while (true)
    {
        system("cls");
      cout <<"******************************** " <<endl;
      cout <<"       MENU DE JUEGOS "             <<endl;
      cout <<"******************************** \n\n " <<endl;

      cout <<"Elija un Juego: \n\n" <<endl;
      cout <<"1) StartShip \n" <<endl;
      cout <<"2) Snake \n" <<endl;

      cout <<" Ingrese un numero del Menu para seleccionar un Juego:  "<<endl;
      cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("cls");
            starShip();
            break;
        case 2:
            system("cls");
            snake();
            break;
        default:
            break;
        }
    }

    return 0;
}