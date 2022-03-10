#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <vector>
#include "Mascota.h"

using std::string;
using std::vector;

class Propietario{
  private://Definimos los atributos de la clase propietario
    string nombre;
    int id;
    string email;
    int telefono;
  public:
    void setTelefono( int telefono );//Le otorgamos valores a los atributos
    void setId( int id );
    void setNombre( string nombre );
    void setEmail( string email );
    int getTelefono();//Accedemos a los atributos para poder usarlos
    string getEmail();
    int getId();
    string getNombre();
};

#endif
