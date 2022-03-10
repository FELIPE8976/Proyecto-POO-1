#include "Mascota.h"

void Mascota::setStatus( bool status ){
	this->status = status;
}
void Mascota::setSangre( string tipoSangre){
	this->tipoSangre = tipoSangre;
}
void Mascota::setFechaDefuncion( string fechaDefuncion){
	this->fechaDefuncion = fechaDefuncion;
}
void Mascota::setPeso( float peso ){
	this->peso = peso;
}
void Mascota::setEdad( int edad ){
	this->edad = edad;
}
void Mascota::setId( int id ){
	this->id = id;
}
void Mascota::setTipo( char tipo ){
	this->tipo = tipo;
}
void Mascota::setNombre( string nombre ){
	this->nombre = nombre;
}
bool Mascota::getStatus(){
	return this->status;
}
string Mascota::getSangre(){
	return this->tipoSangre;
}
string Mascota::getFechaDefuncion(){
	return this->fechaDefuncion;
}
float Mascota::getPeso(){
	return this->peso;
}
int Mascota::getEdad(){
	return this->edad;
}
int Mascota::getId(){
	return this->id;
}
char Mascota::getTipo(){
	return this->tipo;
}
string Mascota::getNombre(){
	return this->nombre;
}