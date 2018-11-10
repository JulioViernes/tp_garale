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
                cout<<"Ingrese la fecha y hora en tipo AAAAMMDDhhmm"<<endl;
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


int IngresarAutomovilMovil (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],int sizeDesde, int sizeHasta, int sizeString){
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


