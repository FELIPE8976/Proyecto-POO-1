#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include <vector>
#include "Propietario.h"

using std::string;
using std::vector;

class Mascota{
  private://Definimos los atributos de la clase mascota
    char tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    int id;
    bool status; // 1 es viva, 0 es muerta
    string fechaDefuncion;
  public:
    void setStatus( bool status );//Le otorgamos valores a los atributos
    void setSangre( string tipoSangre);
    void setFechaDefuncion( string fechaDefuncion);
    void setPeso( float peso );
    void setEdad( int edad );
    void setId( int id );
    void setTipo( char tipo );
    void setNombre( string nombre );
    bool getStatus();//Accedemos a los atributos para poder usarlos
    string getSangre();
    string getFechaDefuncion();
    float getPeso();
    int getEdad();
    int getId();
    char getTipo();
    string getNombre();
};

#endif
