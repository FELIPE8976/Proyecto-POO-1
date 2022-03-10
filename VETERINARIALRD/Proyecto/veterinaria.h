#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <iostream>
#include <utility>
#include <unordered_map>
#include <vector>

using std::unordered_map;
using std::vector;

#include "propietarioMascota.h"
#include "propietario.h"
#include "Mascota.h"

class Veterinaria{
   private:
      unordered_map<int, Propietario> listPropietarios;//Mapa de los propietarios en el sistema
      unordered_map<int, Mascota> listMascotas;//Mapa de las mascotas en el sistema
      vector<PropietarioMascota>listPropietario;//Vector que almacena las asociaciones entre mascotas y propietarios
   public:
      void inicializarDatos();//Se anxan los propietarios, mascotas y asociaciones al sistema
      void mostrarDatosMascotas();//Imprimimos las mascotas con sus respectivos datos(Nombre, id, tipo...)
      void mostrarPropietariosMascotas(int id);//Imprimos los propietarios para la mascota que escogemos por teclado dando su id
      void imprimirPropietarios();//Imprimimos propietarios con sus respectivos datos(Nombre, id, correo...)
      void cambiarStatus( int id );//Cambiamos el status de la mascota escogida por su id(Solamente de viva a muerta, NO PUEDE REVIVIR)
      void modificarPropietario(int id);//Modificamos datos de contacto del propietario escogido por su id(telefono y correo)
      void eliminarPropietarioMascota(int idPropietario, int idMascota);
      void mostrarMascotasPropietario(int id);//Imprimos las mascotas para el propietario que escogemos por teclado dando su id
      void asociarNexo(int idPropietario, int idMascota);//Creamos una nueva relación Propietario-Mascota usando los id's de cada uno
};

#endif