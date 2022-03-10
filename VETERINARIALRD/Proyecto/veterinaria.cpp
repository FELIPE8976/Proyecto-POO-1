#include "veterinaria.h"
using namespace std;

void Veterinaria::inicializarDatos(){
   Propietario prop1, prop2, prop3, prop4;
   Mascota masc1, masc2, masc3, masc4;
   PropietarioMascota nexo1, nexo2, nexo3, nexo4, nexo5;

   prop1.setNombre("Juan");//Creamos primer propietario ingresando sus datos
   prop1.setId(10929292);
   prop1.setEmail("juan@gmail.com");
   prop1.setTelefono(3122212);

   prop2.setNombre("Pedro");//Creamos segundo propietario ingresando sus datos
   prop2.setId(10132322);
   prop2.setEmail("pedro@gmail.com");
   prop2.setTelefono(3023939);

   prop3.setNombre("Maria");//Creamos tercer propietario ingresando sus datos
   prop3.setId(1076423);
   prop3.setEmail("maria@gmail.com");
   prop3.setTelefono(3167890);

   prop4.setNombre("Nivia");//Creamos cuarto propietario ingresando sus datos
   prop4.setId(106523565);
   prop4.setEmail("nivia@gmail.com");
   prop4.setTelefono(3110985);

   masc1.setNombre("Paquito");//Creamos primer mascota ingresando sus datos
   masc1.setId(123);
   masc1.setEdad(14);
   masc1.setPeso(4.1);
   masc1.setTipo('P');
   masc1.setSangre("DEA-4");
   masc1.setStatus(true);
   masc1.setFechaDefuncion("00/00/00");

   masc2.setNombre("Copito");//Creamos segunda mascota ingresando sus datos
   masc2.setId(045);
   masc2.setEdad(8);
   masc2.setPeso(2.5);
   masc2.setTipo('G');
   masc2.setSangre("AB");
   masc2.setStatus(true);
   masc2.setFechaDefuncion("00/00/00");

   masc3.setNombre("Luna");//Creamos tercera mascota ingresando sus datos
   masc3.setId(017);
   masc3.setEdad(28);
   masc3.setPeso(5.7);
   masc3.setTipo('G');
   masc3.setSangre("A");
   masc3.setStatus(true);
   masc3.setFechaDefuncion("00/00/00");

   masc4.setNombre("Bugs");//Creamos cuarta mascota ingresando sus datos
   masc4.setId(107);
   masc4.setEdad(47);
   masc4.setPeso(2.1);
   masc4.setTipo('O');
   masc4.setSangre("B");
   masc4.setStatus(false);
   masc4.setFechaDefuncion("23/03/22");

   listPropietarios.insert(make_pair(10929292, prop1));//Anexamos los propietarios al mapa listpropietarios haciendo uso del comando insert
   listPropietarios.insert(make_pair(10132322, prop2));
   listPropietarios.insert(make_pair(1076423, prop3));
   listPropietarios.insert(make_pair(106523565, prop4));

   listMascotas.insert(make_pair(123, masc1));//Anexamos las mascotas al mapa listmascotas haciendo uso del comando insert
   listMascotas.insert(make_pair(045, masc2));
   listMascotas.insert(make_pair(017, masc3));
   listMascotas.insert(make_pair(107, masc4));

   nexo1.setPropietario(prop1);//Seteamos las asociaciones
   nexo1.setMascota(masc2);
   nexo2.setPropietario(prop1);
   nexo2.setMascota(masc3);
   nexo3.setPropietario(prop2);
   nexo3.setMascota(masc1);
   nexo4.setPropietario(prop3);
   nexo4.setMascota(masc1);
   nexo5.setPropietario(prop4);
   nexo5.setMascota(masc4);

   listPropietario.push_back(nexo1);//Anexamos las asociaciones al vector listpropietario haciendo uso del comando push_back
   listPropietario.push_back(nexo2);
   listPropietario.push_back(nexo3);
   listPropietario.push_back(nexo4);
   listPropietario.push_back(nexo5);

   return;
}

void Veterinaria::mostrarDatosMascotas(){
   int i;
   unordered_map<int, Mascota>::iterator iter;
   for( iter = listMascotas.begin(); iter != listMascotas.end(); iter++){//Recorremos el mapa de mascotas usando un iterador
      cout<<"Mascota numero "<<(++i)<<endl;
      cout<<"Nombre: "<<iter->second.getNombre()<<endl;//Imprimimos los datos para cada mascota en el mapa
      cout<<"ID: "<<iter->second.getId()<<endl;
      cout<<"Tipo: "<<iter->second.getTipo()<<endl;
      cout<<"Peso: "<<iter->second.getPeso()<<endl;
      cout<<"Edad: "<<iter->second.getEdad()<<endl;
      cout<<"Tipo de sangre: "<<iter->second.getSangre()<<endl;
      if(iter->second.getStatus() == true){//Verificamos el estado, si está viva o muerta
         cout<<"Status: Viva"<<endl;//Si está viva no imprimimos fecha de defunción
      }else{
         cout<<"Status: Muerta"<<endl;
         cout<<"Fecha de Defuncion: "<<iter->second.getFechaDefuncion()<<endl;
      }
      cout<<"=============================================="<<endl<<endl;
   }
   return;
}

void Veterinaria::mostrarPropietariosMascotas(int idMascota){
   int i, pos = -1;//Definimos pos con el valor de -1 para hacer verificación
   Propietario propAux;
   Mascota mascAux;
   unordered_map<int, Mascota>::iterator iter;//Recorremos el mapa de mascotas con un iterador
   for(iter = listMascotas.begin(); iter !=listMascotas.end(); iter++){
      if(iter->second.getId() == idMascota){//Verificamos que el id que recibimos como parámetro esté en el mapa
         pos = i;//Si está, pos toma el valor que este ocupa en el mapa
      }
   }
   if (pos == -1){// Si después de recorrer el mapa, no se obtiene una posición, se asume que ese id no está registrado
      cout<<"Id invalido o inexistente en el sistema"<<endl;
      return;
   }
   for( i=0; i < listPropietario.size(); i++){//Recorremos el vector de asociaciones
      propAux = listPropietario[i].getPropietario();//Nos apoyamos de un propietario auxiliar para acceder a los datos del propietario en cada posición
      mascAux = listPropietario[i].getMascota();//Nos apoyamos de una mascota auxiliar para acceder a los datos de la mascota en cada posición
      if(mascAux.getId() == idMascota){//Cuando encontremos la mascota por su id, imprimimos los datos de su propietario
         cout<<"Propietario "<<(i)<<endl;
         cout<<"===================="<<endl;
         cout<<"Nombre: "<<propAux.getNombre()<<endl;
         cout<<"Id: "<<propAux.getId()<<endl<<endl;
      }
   }
   return;
}

void Veterinaria::imprimirPropietarios(){
   int i;
   unordered_map<int, Propietario>::iterator iter;//Recorremos el mapa de propietarios con un iterador
   cout<<"Hay "<<listPropietarios.size()<<" propietarios"<<endl<<endl;//Imprimos el size del mapa para ver cuántos propietarios hay
   for( iter = listPropietarios.begin(); iter != listPropietarios.end(); iter++){
      cout<<"Propietario numero "<<(++i)<<endl;//Imprimimos los datos para cada propietario en el mapa
      cout<<"Nombre: "<<iter->second.getNombre()<<endl;
      cout<<"ID: "<<iter->second.getId()<<endl;
      cout<<"Email: "<<iter->second.getEmail()<<endl;
      cout<<"Telefono: "<<iter->second.getTelefono()<<endl;
      cout<<"=============================================="<<endl<<endl;
   }
   return;
}

void Veterinaria::cambiarStatus(int id){
   int i, pos = -1;
   unordered_map<int, Mascota>::iterator iter;//Recorremos el mapa de mascotas, para verificar que el id ingresado sea válido y esté en el mapa
   for(iter = listMascotas.begin(); iter != listMascotas.end(); iter++){
      if(iter->second.getId() == id){
         pos = iter->first;
      }
   }
   if (pos == -1){
      cout<<"Id invalido o inexistente en el sistema"<<endl;
      return;
   }
   if( listMascotas.at(pos).getStatus() == true){//Si la mascota está viva, pasamos su estado a muerta
      listMascotas.at(pos).setStatus(false);
   }
   else{//Si la mascota está muerta, no puede cambiar su estado, no se puede "revivir"
      cout<<"La mascota no puede cambiar de estado, está muerta"<<endl;
   }
   return;
}

void Veterinaria::modificarPropietario(int id){
   int opc, telefono, i, pos=1;
   string email;
   unordered_map<int, Propietario>::iterator iter;//Recorremos el mapa de propietarios, para verificar que el id ingresado sea válido y esté en el mapa
   for(iter = listPropietarios.begin(); iter != listPropietarios.end(); iter++){
      if(iter->second.getId() == id){
         pos = iter->first;
      }
   }
   if (pos == -1){
      cout<<"Id invalido o inexistente en el sistema"<<endl;
      return;
   }
   cout<<"¿Que desea modificar del propietario?"<<endl;//Le damos al usuario la opción de escoger qué desea modificar
   cout<<"1. Email"<<endl;
   cout<<"2. Telefono"<<endl;
   cout<<"0. Nada/Salir"<<endl;
   cin>>opc;
   while (opc < 0 || opc > 2)//Verificamos que la opción esté dentro de los rangos
   {
      cout<<"Digite una opción valida"<<endl;
      cin>>opc;
   }
   if(opc == 1){
      cout<<"Digite el nuevo email"<<endl;//Se pide por teclado el nuevo email
      cin>>email;
      listPropietarios.at(pos).setEmail(email);
   }
   else if(opc == 2){
      cout<<"Digite el nuevo telefono"<<endl;//Se pide por teclado el nuevo telefono
      cin>>telefono;
      listPropietarios.at(pos).setTelefono(telefono);
   }
      return;
}

void Veterinaria::eliminarPropietarioMascota(int idPropietario, int idMascota){
   int i, pos = -1, sum = 0;
   bool borrado = false;
   Propietario propAux;
   Mascota mascAux;
   for(i=0; i<=listPropietarios.size(); i++){//Recorremos el mapa de propietario para verificar el id
      if(listPropietarios.at(i).getId() == idPropietario){
         pos = i;
      }
   }
   if (pos == -1){
      cout<<"Id de propietario inexistente en el sistema"<<endl;
      return;
   }
   pos = -1;
   for(i=0; i<=listMascotas.size(); i++){//Recorremos el mapa de mascotas para verificar el id
      if(listMascotas.at(i).getId() == idMascota){
         pos = i;
      }
   }
   if (pos == -1){
      cout<<"Id de mascota inexistente en el sistema"<<endl;
      return;
   }
   for (auto i = listPropietario.begin(); i != listPropietario.end(); ++i){//Recorremos el vector
      propAux = listPropietario.at(sum).getPropietario();
      mascAux = listPropietario.at(sum).getMascota();
        if (mascAux.getId() == idMascota && propAux.getId() == idPropietario) {//Cuando se encuentre el nexo, se procede a borrar con el comando erase
            listPropietario.erase(i);
            borrado = true;//Se usa un bool para saber si el dato es encontrado y borrado
            i--;
        }
      sum++;
   }
   if(borrado==false){//Si no es borrado, es porque esa mascota y propietario no tienen asociacion
      cout<<"El propietario y la mascota no tienen un vinculo"<<endl;
   }
   return;
}

void Veterinaria::mostrarMascotasPropietario(int idPropietario){
   int i, pos = -1;
   unordered_map<int, Propietario>::iterator iter;//Recorremos el mapa propietario para verificar que el id sea valido
   for(iter = listPropietarios.begin(); iter != listPropietarios.end(); iter++){
      if(iter->second.getId() == idPropietario){
         pos = i;
      }
   }
   if (pos == -1){
      cout<<"Id invalido o inexistente en el sistema"<<endl;
      return;
   }
   Propietario propAux;
   Mascota mascAux;
   for( i=0; i<listPropietario.size(); i++){//Imprimimos las mascotas con su nombre e id para cada propietario
      propAux = listPropietario.at(i).getPropietario();
      mascAux = listPropietario.at(i).getMascota();
      if(propAux.getId() == idPropietario){
         cout<<"Mascota "<<(i+1)<<endl;
         cout<<"===================="<<endl;
         cout<<"Nombre: "<<mascAux.getNombre()<<endl;
         cout<<"Id: "<<mascAux.getId()<<endl<<endl;
      }
   }
   return;
}

void Veterinaria::asociarNexo(int idPropietario, int idMascota){
   int i, pos = -1;
   unordered_map<int, Propietario>::iterator iterProp;//Recorremos el mapa para verificar si existe un propietario con ese id
   for(iterProp = listPropietarios.begin(); iterProp != listPropietarios.end(); iterProp++){
      if(iterProp->second.getId() == idPropietario){
         pos = iterProp->first;
      }
   }
   if (pos == -1){
      cout<<"Id de propietario inexistente en el sistema"<<endl;
      return;
   }
   pos = -1;
   unordered_map<int, Mascota>::iterator iterMasc;//Recorremos el mapa para verificar si existe una mascota con ese id
   for(iterMasc = listMascotas.begin(); iterMasc != listMascotas.end(); iterMasc++){
      if(iterMasc->second.getId() == idMascota){
         pos = iterMasc->first;
      }
   }
   if (pos == -1){
      cout<<"Id de mascota inexistente en el sistema"<<endl;
      return;
   }
   Propietario propAux;
   PropietarioMascota propMascAux;//Usamos auxiliares para guardar los datos en una clase PropietarioMascota
   for( iterProp=listPropietarios.begin(); iterProp!=listPropietarios.end(); iterProp++){
      if(iterProp->first == idPropietario){
         propAux = iterProp->second;
      }
   }
   Mascota mascAux;
   for( iterMasc=listMascotas.begin(); iterMasc!=listMascotas.end(); iterMasc++){
      if(iterMasc->first == idMascota){
         mascAux = iterMasc->second;
      }
   }
   propMascAux.setMascota(mascAux);
   propMascAux.setPropietario(propAux);
   listPropietario.push_back(propMascAux);//Usamos el metodo push_back para añadir el PropietarioMascota al vector de asociaciones
   return;
}