#include "propietarioMascota.h"

using namespace std;

Propietario PropietarioMascota::getPropietario(){
   return this->propietario;
}
void PropietarioMascota::setPropietario(Propietario propietario){
   this->propietario = propietario;
   return;
}
Mascota PropietarioMascota:: getMascota(){
   return this->mascota;
}
void PropietarioMascota:: setMascota(Mascota mascota){
   this->mascota = mascota;
   return;
}