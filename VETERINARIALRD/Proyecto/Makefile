all: compilar
compilar: propietario mascota propietarioMascota veterinaria main
	g++ -o Salida Propietario.o Mascota.o propietarioMascota.o veterinaria.o main.o
propietario: Propietario.cpp propietario.h
	g++ -c Propietario.cpp
mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
propietarioMascota: propietarioMascota.h propietario.h Mascota.h
	g++ -c propietarioMascota.cpp
veterinaria: veterinaria.h veterinaria.cpp propietarioMascota.h Propietario.h Mascota.h
	g++ -c veterinaria.cpp
main: main.cpp veterinaria.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o