#ifndef PROPIETARIOMASCOTA_H
#define PROPIETARIOMASCOTA_H

#include <iostream>
#include "propietario.h"

class PropietarioMascota{
   private://Definimos los atributos de la clase PropietarioMascota
      Propietario propietario;
      Mascota mascota;
   public:
      Propietario getPropietario();//Le otorgamos valores a los atributos
      void setPropietario(Propietario propietario);
      Mascota getMascota();//Accedemos a los atributos para poder usarlos
      void setMascota(Mascota mascota);
};

#endif