#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include <vector>
#include "Propietario.h"

using std::string;
using std::vector;

class Mascota{
  private:
    char tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    int id;
    bool status; // 1 es viva, 0 es muerta
    string fechaDefuncion;
  public:
    bool getStatus();
    string getSangre();
    string getFechaDefuncion();
    float getPeso();
    int getEdad();
    char getTipo();
    string getNombre();
};

#endif
