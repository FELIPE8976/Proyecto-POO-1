#include <iostream>
#include "veterinaria.h"

using namespace std;

void menu(){//Menú de opciones a escoger por el usuario
   cout<<"BIENVENIDOS A VETERINARIA EL TRIUNFO"<<endl;
   cout<<"===================================="<<endl<<endl;
   cout<<"1. Listar propietarios"<<endl;
   cout<<"2. Listar mascotas"<<endl;
   cout<<"3. Listar propietarios por mascota"<<endl;
   cout<<"4. Listar mascotas por propietario"<<endl;
   cout<<"5. Asociar propietario<->mascota"<<endl;
   cout<<"6. Editar datos para propietario"<<endl;
   cout<<"7. Editar estado de una mascota"<<endl;
   cout<<"0. Salir"<<endl;
   cout<<"Opción: ";
}

int main(){
   Veterinaria sistema;//Declaramos la veterinaria
   sistema.inicializarDatos();//Inicializamos con los propietarios y mascotas por defecto
   int opc, idMascota, idPropietario;
   do
   {
   menu();
   cin>>opc;
   while(opc < 0 || opc > 7){//Verificamos que la opción escogida esté dentro del rango
      cout<<"Ingrese una opcion valida"<<endl;
      cin>>opc;
   }
   switch (opc)
   {
   case 1://Imprimimos propietarios con sus respectivos datos(Nombre, id, correo...)
      sistema.imprimirPropietarios();
      break;
   case 2://Imprimimos las mascotas con sus respectivos datos(Nombre, id, tipo...)
      sistema.mostrarDatosMascotas();
      break;
   case 3://Imprimos los propietarios para la mascota que escogemos por teclado dando su id
      cout<<"Introduzca el id de la mascota"<<endl;
      cin>>idMascota;
      sistema.mostrarPropietariosMascotas(idMascota);
      break;
   case 4://Imprimos las mascotas para el propietario que escogemos por teclado dando su id
      cout<<"Introduzca el id del propietario"<<endl;
      cin>>idPropietario;
      sistema.mostrarMascotasPropietario(idPropietario);
      break;
   case 5://Creamos una nueva relación Propietario-Mascota usando los id's de cada uno
      cout<<"Introduzca el id de la mascota"<<endl;
      cin>>idMascota;
      cout<<"Introduzca el id del propietario"<<endl;
      cin>>idPropietario;
      sistema.asociarNexo(idPropietario, idMascota);
      break;
   case 6://Modificamos datos de contacto del propietario escogido por su id(telefono y correo)
      cout<<"Introduzca el id del propietario"<<endl;
      cin>>idPropietario;
      sistema.modificarPropietario(idPropietario);
      break;
   case 7://Cambiamos el status de la mascota escogida por su id(Solamente de viva a muerta, NO PUEDE REVIVIR)
      cout<<"Introduzca el id de la mascota"<<endl;
      cin>>idMascota;
      sistema.cambiarStatus(idMascota);
      break;
   default:
      break;
   }
   } while (opc != 0);//Este ciclo cierra al escoger la opción 0(Salir)
   return 0;
}