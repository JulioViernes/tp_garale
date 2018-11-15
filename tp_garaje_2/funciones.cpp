#include <iostream>
#include <conio.h>
#include "funciones.h"
#include <stdio.h>
#include <time.h>

int mostrarMenu(int seleccion){
        seleccion=0;
        cout << "================================================"<< endl;
        cout << "Ingrese la opcion deseada."<< endl<< endl;
        cout << "Ingrese 1 para ingresar un vehículo."<< endl<< endl;
        cout << "Ingrese 2 para la salida de un vehículo."<< endl<< endl;
        cout << "Ingrese 3 para mover un vehículo."<< endl<< endl;
        cout << "Ingrese 4 para liberar cochera fija"<< endl<< endl;
        cout << "Ingrese 5 para obtener un listado de Deudores."<< endl<< endl;
        cout << "Ingrese 6 para obtener cobranzas mensuales."<< endl<< endl;
        cout << "================================================."<< endl;

    do { cout << "Seleccione una opcion entre 1-6";
         cin >> seleccion; }
         while (seleccion <1 || seleccion>6);

        switch(seleccion){
      case 1:ingreseAutomovil();
        break;
        case 2:salidaDeUnAutomovil();
        break;
        case 3:moverAutomovilDeCochera();
        break;
        case 4:liberarCocheraFija();
        break;
        case 5:listadoDeudores();
        break;
        case 6:cobranzasMensuales();
        break;*/
    }

    return seleccion;
}


void listaDeudores(int sizeDesde, int sizeHasta,int idCochera){

    elegirOpcion();
    if (elegirOpcion == 5){
            listarCocherasOcupadas();


void listarCocherasOcupadas(int sizeHasta, int sizeDesde){
    int cocheraVacFija[CANT_COCHFIJAS];
    for (int i = sizeDesde; i = sizeHasta; i ++){
        if(cochera[i].isEmpty == 1){ i++;
            cocheraVacFija[i]=cochera[i].isEmpty;
            cout<<"La deuda de las cocheras es: "<< endl;
            cocheraVacFija[i] <<endl;
        }
    }
}
