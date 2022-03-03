#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <vector>
#include "Mascota.h"

using std::string;
using std::vector;

class Propietario{
  private:
    char tipo;
    float peso;
    int edad;
    char tipoSangre;
    string nombre;
    vector<Mascota> mascotas;
  public:
    void agregarPropietario();
    void modificarPropietario();
    void eliminarPropietario();
    void listarContacto();
    int contarPropietarios();
    void mostrarMascotasPropietario();
    void asociarMascota();
};

#endif
