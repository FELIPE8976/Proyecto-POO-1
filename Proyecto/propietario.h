#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <vector>
#include "Mascota.h"

using std::string;
using std::vector;

class Propietario{
  private:
    string nombre;
    int id;
    string email;
    int telefono;
  public:
    int getTelefono();
    string getEmail();
    string getNombre();
};

#endif
