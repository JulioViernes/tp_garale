#include <iostream>

using namespace std;

int main()
{
    cout << "Menu de inicio:" << endl;
    cout << "1-  " << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cout << "5" << endl;
    cout << "6" << endl;

    st_err ingresaUnAutomovil(st_automovil automovil[], st_duenio duenio[], int tipoAlquiler, int fecha, int hora){

    cout << "Ingrese automovil" << endl;
    string mensajesEntrada['automovil',' ]
    for (i=0, i<automovil.size, i++) {

    //cout << "Ingrese ",mensajesEntrada[i],": " << endl;
    //    cin >>

        if(automovil[i].isEmpty){
            cout<<"Ingresar el tipo de alquiler:\n 1. Por hora\n2. Por dia.\n3. Mensual"<< endl; cin>>tipoAlquiler;
            cout<<"Ingrese la patente"<<endl; cin>>automovil[i].patente;
            cout<<"Ingrese tipo auto 1.Camioneta 2.Auto"<<endl; cin>>automovil[i].tipo;

            if (variable == 3){
                cout<<"Ingrese nombre"<<endl; cin >> duenio[i].nombre;
                cout<<"Ingrese el apellido"<< endl; cin >> duenio[i].apellido;
                cout<<"Ingrese el DNI"<< endl; cin>> duenio[i].dni;
                cout<<"Ingrese n° de telefono"<< endl; cin>>duenio[i].telefono;
                cout<<"Ingrese un correo electronico"<<endl; cin>> duenio[i].correo;
            }
        }
    }
    cin >> automovil[]


    }


    return 0;
}
