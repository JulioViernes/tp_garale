#include <iostream>
#include <conio.h>
#include "funciones.h"
#include <stdio.h>
#include <time.h>


int ingresarAutomovilFijo (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],ST_DUENIO duenio[], int sizeHasta, int sizeString){
    int retorno=-1;
        for(int i=0;i<sizeHasta;i++){
           if(automovil[i].isEmpty==1){
                cout<<"Ingrese los datos del vehiculo:\nPatente: "<<endl;
                cin>>automovil[i].patente;
                cout<<"Tipo de vehiculo.\n1. Automovil.\n2.Camioneta."<<endl;
                cin>>automovil[i].tipo;
                cout<<"Ingrese la fecha en tipo AAAAMMDD"<<endl;
                cin>>cochera[i].fechayHora;
                cout<<"Ingrese los datos del cliente.\nNombre: "<<endl;
                cin>>duenio[i].nombre;
                cout<<"Apellido: "<< endl;
                cin>>duenio[i].apellido;
                cout<<"DNI: "<<endl;
                cin>>duenio[i].dni;
                cout<<"Telefono: "<<endl;
                cin>>duenio[i].telefono;
                cout<<"E-Mail: "<<endl;
                cin>>duenio[i].correo;

                automovil[i].isEmpty=0;
                retorno=1;
                return retorno;


            }
        }
        return retorno;
}


int ingresarAutomovilMovil (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],int sizeDesde, int sizeHasta, int sizeString){
    int retorno=-1;
    for (int i=sizeDesde;i<sizeHasta;i++){
        if(cochera[i].isEmpty==1){
            cout<<"Ingrese la patente: "<<endl;
            cin>>automovil[i].patente;
            cout<<"Ingrese el tipo de vehiculo."<<endl;//podria ponerse con numeros??
            cin>>automovil[i].tipo;
            cout<<"Ingrese la fecha y hora en tipo AAAAMMDDhhmm"<<endl;
            cin>>cochera[i].fechayHora;
            cochera[i].isEmpty=0;
            retorno=1;
            return retorno;;

            }
    }

    return retorno;
}


int iniciar_cochera (ST_COCHERA cochera[], int sizeHasta){
    int retorno=-1;
    for (int i=0;i<sizeHasta;i++){
        cochera[i].isEmpty=1;
        cochera[i].id=i+1;
        retorno=1;
    }
    return retorno;
}
 int salidaVehiculoTemporal (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],ST_PRECIOS valor,int tipo, char patente[], int fechayHoraIngreso, int sizeHasta, int sizeDesde){
    int retorno=-1, pagar, horaSalida, dia;
    float tiempo;
    cout<<"Ingrese la fecha y hora de salida. Formato AAAAMMDDhhmm."<<endl;
    cin>>horaSalida;
    for(int i=0;i<sizeHasta;i++){
        if(automovil[i].patente==patente && cochera[i].isEmpty==0){
            tiempo= calcularHoras(fechayHoraIngreso, horaSalida);
            dia=calcularDias(fechayHoraIngreso,horaSalida);
            if (dia==0){
                if (tipo==1){
                    pagar=tiempo*valor.precioAutoxHora;
                    cochera[i].isEmpty=1;
                    retorno=1;
                    cout<<"El importe a abonar es: "<<pagar<<endl;
                    return retorno;
                }else {
                    pagar=tiempo*valor.precioCamixHora;
                    cochera[i].isEmpty=1;
                    retorno=1;
                    cout<<"El importe a abonar es: "<<pagar<<endl;
                    return retorno;
                    }
            } else{
                if (tipo==1){
                    pagar=dia*valor.precioAutoxDia;
                    cochera[i].isEmpty=1;
                    retorno=1;
                    cout<<"El importe a abonar es: "<<pagar<<endl;
                    return retorno;
                } else{
                    pagar=dia*valor.precioCamixDia;
                    cochera[i].isEmpty=1;
                    retorno=1;
                    cout<<"El importe a abonar es: "<<pagar<<endl;
                    return retorno;
                }
            }
        }
    }
    return retorno;
 }



int listarVehiculos (ST_AUTOMOVIL vehiculo[], int sizeHasta){
    int retorno=-1;
    for (int i=0;i<sizeHasta;i++){
        if (vehiculo[i].isEmpty==0){
            cout<<"-Patente: "<<vehiculo[i].patente<<"\n-Tipo: "<<vehiculo[i].tipo;
            retorno=1;
            return retorno;
        }
    }
    return retorno;
}

int calcularHoras(int ingreso, int salida){
    int x, y, tiempo;
    y= salida%10000;
    x= ingreso%10000;
    tiempo= ((y/100)*60+(y%100))- ((x/100)*60+(x%100));
    tiempo=tiempo/60;
    return tiempo+1;
}
int calcularDias (int ingreso, int salida){
        int X, Y;
        X=(ingreso-((ingreso/1000000)*1000000))/10000;
        Y=(salida-((salida/1000000)*1000000))/10000;
        if(X>Y){
            Y+=30;
        }

    return Y-X;
}

int liberarCocheraFija(ST_COCHERA cochera[], ST_PRECIOS valor, int tipo, int id, int ingreso){
    int salida;
    cout<< "Ingrese el mes de salida"<<endl;
    cin>>salida;
    int retorno=-1;
    cochera[id-1].isEmpty=1;
    if(tipo==1){
        retorno=calcularDias(ingreso, salida)*valor.precioAutoxMes;
        return retorno;
    } else {
        retorno= calcularDias(ingreso, salida)* valor.precioCamixMes;
        return retorno;
    }
    return retorno;
}


int calcularMeses (int ingreso, int salida){
    int X, Y;
        X=(ingreso-((ingreso/10000)*10000))/100;
        Y=(salida-((salida/10000)*10000))/100;
    return Y-X;
}

void moverVehiculoDeCochera(int sizeDesde; int sizeHasta,int idCochera, int &newIdCochera){
    elegirOpcion();
    if (elegirOpcion == 1){
        listarCocherasVaciasF();
        cout <<"Cual es la cochera de origen: " <<endl;
        cin>>idCochera;
        cout <<"Elija la nueva cochera de destino: " <<endl;
        cin>>newIdCochera;
        for (int i = sizeDesde; i = sizeHasta; i ++){
            if(cochera[newIdCochera].isEmpty == 1){
                cochera[idCochera] = cochera[newIdCochera];
                cochera[newIdCochera].isEmpty == 0;
                cout <<"Su nueva cochera es <<cochera[newIdCochera]" <<endl;
            }
        }    
     }
    if (elegirOpcion == 2){
        listarCocherasVaciasM();
        cout <<"Cual es la cochera de origen: " <<endl;
        cin>>idCochera;
        cout <<"Elija la nueva cochera de destino: " <<endl;
        cin>>newIdCochera;
        for (int i = sizeDesde; i = sizeHasta; i ++){
            if(cochera[newIdCochera].isEmpty == 1){
                cochera[idCochera] = cochera[newIdCochera];
                cochera[newIdCochera].isEmpty == 0;
                cout <<"Su nueva cochera es <<cochera[newIdCochera]" <<endl;   
            }
        }    
     }


void elegirOpcion( int &opcion){
    cout<<"Ingrese el número de la opción deseada: "<<endl;
    cout<<"Ingrese 1 si desea mover un vehículo Fijo: "<<endl;
    cout<<"Ingrese 2 si desea mover un vehículo movil: "<<endl;
    cin>>opcion;
}



void listarCocherasVaciasF(int sizeHasta, int sizeDesde){
    int cocheraVacFija[CANT_COCHFIJAS];
    for (int i = sizeDesde; i = sizeHasta; i ++){
        if(cochera[i].isEmpty == 1){
            cocheraVacFija[i]=cochera[i].isEmpty;
            cout<<"Las cocheras Fijas Vacías son: "<< cocheraVacFija[i] <<endl;
        }
    }

}

void listarCocherasVaciasM(int sizeHasta, int sizeDesde){
    int cocheraVacMov[CANT_COCHMOV];
    for (int i = sizeDesde; i = sizeHasta; i ++){
        if(cochera[i].isEmpty == 1){
            cocheraVacMov[i]=cochera[i].isEmpty;
            cout<<"Las cocheras Moviles Vacías son: "<< cocheraVacMov[i] <<endl;
        }
    }

}

