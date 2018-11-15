 int calculoCochera(int mes, int tipoAlquiler, int monto, int i){
    tipoAlquiler=cocheras[i].tipo;
    switch(tipoAlquiler) {
    case 1: tipoAlquiler=2500;
    break;
    case 2: tipoAlquiler=4000;
    break;
    }
    mesIngreso =(cocheras[i].fechaHora%100000)/100;
    monto = (mes-mesIngreso)*tipoAlquiler;
    return monto;

 listaDeudores(int monto, int mes, int monto){
int monto=0;
     cout << "Para imprimir lista de deudores ingrese el mes actual:" << end;
     cin >> mes;
     cout << "Deudas de alguileres mensuales" << endl;
          for(i=0, i<7, i++) {
        if(cocheraFija[i].isEmpty!=1){
            monto=calculoCochera(mes, alquiler);
            }
        cout<<"La cochera nro°"<< i+1 << "debe pagar el monto: " << monto;

        }
     }
 }
