#include "Propietario.h"

void Propietario::setTelefono( int telefono ){
	this->telefono = telefono;
}
void Propietario::setId( int id ){
	this->id = id;
}
void Propietario::setNombre( string nombre ){
	this->nombre = nombre;
}
void Propietario::setEmail( string email ){
	this->email = email;
}
int Propietario::getTelefono(){
		 return this->telefono;
}
int Propietario::getId(){
		 return this->id;
}
string Propietario::getEmail(){
	return this->email;
}
string Propietario::getNombre(){
	return this->nombre;
}