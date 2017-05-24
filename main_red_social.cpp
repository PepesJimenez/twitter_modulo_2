#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "twitter.hpp"
#include "usuario_twitter.hpp"


using namespace std;
using namespace bblProgII;

// Escribe el menú de opciones, lee la opción por teclado y la devuelve
char menu();

// Pulsar una tecla para continuar
void Seguir();

// Escribir resultado de operación por pantalla
void escribir_resultado(const Resultado res);


int main() {
  /* ALUMNO:
    Declaraciones de datos: variables, objetos, etc.*/

  time_t tSac; // instante actual
  tm tms;

  system("clear"); //// En Windows: system("cls");
  bool respuesta;

  /* ALUMNO: cargar toda la red social desde disco y obtener 'respuesta'*/

  if (respuesta) {
    cout << "LA RED SE HA CARGADO DE DISCO CORRECTAMENTE..." << endl;
  } else {
    cout << "NO SE HA PODIDO CARGAR LA RED DESDE DISCO..." << endl;
  }
  Seguir();

  do {
    opcion = menu();
    switch (opcion) {
    case 'a': /* ALUMNO: completar */
      Seguir();
      break;
    case 'b':
      Seguir();
      break;
    case 'c': /* ALUMNO: completar */
      Seguir();
      break;
    case 'd': /* ALUMNO: completar */
      Seguir();
      break;
    case 'e': /* ALUMNO: completar */
      Seguir();
      break;
    case 'f': /* ALUMNO: completar */
      Seguir();
      break;
    case 'g': /* ALUMNO: completar solo si se implementan las menciones*/
      Seguir();
      break;
    case 'h': /* ALUMNO: completar solo si se implementan las menciones*/
      Seguir();
      break;
    case 'i': /* ALUMNO: completar */
      Seguir();
      break;
    case 'j': /* ALUMNO: completar */
      Seguir();
      break;
    case 'k': /* ALUMNO: completar */
      Seguir();
      break;
    case 'l': /* ALUMNO: completar */
      Seguir();
      break;
    case 'm': /* ALUMNO: completar */
      escribir_resultado(res);
      Seguir();
      break;
    case 'n': /* ALUMNO: completar */
      escribir_resultado(res);
      Seguir();
      break;
    case 'o': /* ALUMNO: completar */
      escribir_resultado(res);
      Seguir();
      break;
    case 'p': /* ALUMNO: completar */
      Seguir();
      break;
    case 'x': /* ALUMNO: completar */
    }
  } while (opcion != 'x');
}

char menu() {
  char opcion;

  system("clear"); // En Windows: system("cls");

  do {
    cout << "MENÚ DE OPCIONES (elija una opción y pulse <enter>):" << endl << endl;
    cout << "a -> Obtener id del usuario actualmente conectado" << endl;
    cout << "b -> Consultar si un usuario me sigue" << endl;
    cout << "c -> Consultar si estoy siguiendo a un usuario" << endl;
    cout << "d -> Imprimir mis estadísticas (seguidores, siguiendo, etc.)" << endl;
    cout << "e -> Imprimir mi lista de seguidores y usuarios a los que sigo" << endl;
    cout << "f -> Imprimir mi lista de tweets" << endl;
    /* OPCIONAL: 
    cout << "g -> Imprimir mi lista de menciones por otros usuarios" << endl;
    cout << "h -> Actualizar mi lista de menciones que me han hecho otros usuarios" << endl;
    */
    cout << "i -> Modificar el id de mi usuario" << endl;
    cout << "j -> Insertar un nuevo tweet" << endl;
    cout << "k -> Insertar un nuevo usuario en mi lista de usuarios a los que sigo" << endl;
    cout << "l -> Eliminar un usuario de mi lista de usuarios a los que sigo" << endl;
    cout << "m -> Cambiar el usuario actualmente conectado" << endl;
    cout << "n -> Insertar un nuevo usuario en red" << endl;
    cout << "o -> Eliminar un usuario de la red" << endl;
    cout << "p -> Imprimir la lista de usuarios de la red social" << endl;
    cout << "x -> SALIR DEL PROGRAMA" << endl;

    cin.get(opcion); cin.ignore(); opcion = char(tolower(int(opcion)));
  } while ((opcion < 'a' || opcion > 'p') && (opcion != 'x'));

  return opcion;
}

void Seguir() {
  string enter;

  cout << endl << "Pulse <enter> para continuar..." << endl;
  getline(cin, enter);
}


void escribir_resultado(const Resultado res) {
  switch (res) {
  case OK: cout << "Operación realizada correctamente." << std::endl;
    break;
  case LISTA_LLENA: cout << "Operación NO realizada: lista llena." << std::endl;
    break;
  case YA_EXISTE: cout << "Operación NO realizada: el elemento ya existe" << std::endl;
    break;
  case NO_EXISTE: cout << "Operación NO realizada: el elemento no existe" << std::endl;
    break;
  case FIC_ERROR: cout << "Error en la apertura de fichero" << std::endl;
  }
}