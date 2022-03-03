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
    char tipoSangre;
    string nombre;
    int id;
    bool status; // 1 es viva, 0 es muerta
    vector<Propietario> propietarios;
  public:
    void mostrarDatosMascotas();
    void mostrarPropietariosMascotas();
    void imprimirPropietarios();
    void asociarPropietario();
    void cambiarStatus();
    void eliminarPropietario();
};

#endif
