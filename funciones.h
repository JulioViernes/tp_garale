#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define MAX_CHAR 20
#define CANT_AUTOMOVILES 50
#define CANT_COCHERAS 20
#define CANT_COCHFIJAS 5
#include <iostream>
#include <stdio.h>
#include "funciones.h"
#include <conio.h>

using namespace std;

typedef struct duenio{
    string nombre;
    string apellido;
    int dni;
    int telefono;
    string correo;
} ST_DUENIO;

typedef struct automovil{
    string patente;
    int tipo;
    ST_DUENIO duenio;
    int isEmpty;
}ST_AUTOMOVIL;

typedef struct precios{
    float precioAutoxHora = 50;
    float precioCamixHora = 75;
    float precioAutoxDia = 300;
    float precioCamixDia = 400;
    float precioAutoxMes = 2500;
    float precioCamixMes = 4000;
}ST_PRECIOS;

typedef struct cochera{
    int id;
    ST_AUTOMOVIL automovil;
    int fechayHora;
    int isEmpty;
   }ST_COCHERA;

typedef struct garage{
    ST_COCHERA cocheraFija;
    ST_COCHERA cocheraMovil;
}ST_GARAGE;


int iniciar_cochera (ST_COCHERA cochera[], int sizeHasta);

int ingresarAutomovilFijo (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],ST_DUENIO duenio[], int sizeHasta, int sizeString);

int ingresarAutomovilMovil (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],int sizeDesde, int sizeHasta, int sizeString);

int listarVehiculos (ST_AUTOMOVIL vehiculo[], int sizeHasta);

int calcularHoras(int ingreso, int salida);

int salidaVehiculoTemporal (ST_AUTOMOVIL automovil[], ST_COCHERA cochera[],ST_PRECIOS valor,int tipo, char patente[], int fechayHoraIngreso, int sizeHasta);

int calcularDias (int ingreso, int salida);

int calcularMeses (int ingreso, int salida);
#endif // FUNCIONES_H_INCLUDED
