#include <iostream>
#include "estructura.h"

using namespace std;


int main()
{
int opcion;
    cout<<"================================================."<< endl;
    cout<<"Ingrese la opcion deseada."<< endl;
    cout<<"Ingrese 1 para ingresar un vehículo."<< endl;
    cout<<"Ingrese 2 para la salida de un vehículo."<< endl;
    cout<<"Ingrese 3 para mover un vehículo."<< endl;
    cout<<"Ingrese 4 para liberar cochera fija"<< endl;
    cout<<"Ingrese 5 para obtener un listado de Deudores."<< endl;
    cout<<"Ingrese 6 para obtener cobranzas mensuales."<< endl;
    cout<<"================================================."<< endl;
    cin>>opcion;

    switch(opcion){
        case 1:ingreseAutomovil();
        break;
        case 2:salidaDeUnAutomovil();
        break;
        case 3:moverAutomovilDeCochera();
        break;
        case 4:liberarCocheraFija();
        break;
        case 5:listadoDeDeudores();
        break;
        case 6:cobranzasMensuales();
        break;
        case defaul:
    }

    return 0;
}
