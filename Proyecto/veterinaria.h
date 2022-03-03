#include <iostream>
#include <utility>
#include <unordered_map>
#include <vector>

using std::unordered_map;
using std::vector;

#include "propietarioMacota.h"
#include "propietario.h"
class Veterinaria{
   private:
      unordered_map<int, Propietario> listPropietarios;
      unordered_map<int, Mascota> listMascotas;
      vector<PropietarioMascota>listPropietario;
   public:
      void mostrarDatosMascotas();
      void mostrarPropietariosMascotas();
      void imprimirPropietarios();
      void asociarPropietario();
      void cambiarStatus();
      void eliminarPropietario();
      void agregarPropietario();
      void modificarPropietario();
      void eliminarPropietario();
      void listarContacto();
      int contarPropietarios();
      void mostrarMascotasPropietario();
      void asociarMascota();
};