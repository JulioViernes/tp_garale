#ifndef ESTRUCTURA_H_INCLUDED
#define ESTRUCTURA_H_INCLUDED



#endif // ESTRUCTURA_H_INCLUDED

typedef struct duenios {
    string nombre;
    string apellido;
    int dni;
    int telefono;
}ST_DUENIO;

typedef struct precios{
    float precioAutoxHora = 50;
    float precioCamixHora = 75;
    float precioAutoxDia = 300;
    float precioCamixDia = 400;
    float precioAutoxMes = 2500;
    float precioCamixMes = 4000;
}ST_PRECIO;

typedef struct automovil {
    string patente;
    string tipo;
    ST_DUENIO duenio;
}ST_AUTOMOVIL;

ST_AUTOMOVIL.patente = AA001AA;
ST_AUTOMOVIL.tipo = camioneta;



typedef struct cocheras{
    int id;
    int fechaHora;
    ST_PRECIO pagos;
    ST_PRECIO precio;
}ST_COCHERA;

typedef struct garage{
    ST_COCHERA cocheraFija;
    ST_COCHERA cocheraMovil;

}ST_GARAGE;

ST_ERROR ingresarAutomovil(){
}
int salidaDeUnAutomovilTemporario(){

}




