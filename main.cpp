#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include "include/casilla.h"
#include "include/jugador.h"
#include "include/tablero.h"
#include <random>
using namespace std;

///////////////////////                    METODOS PARA JUGADOR         //////////////////////////////////
void Jugador::InscribeJugador(string nombre){
	Jugador::Nombre=nombre;
	}

void Jugador::InscribirFicha(string ficha){
	Jugador::ficha=ficha;
	}
	
void Jugador::DarDineroInicial(){
	this->_CuentaDeDinero=1000;
  cout << this->_CuentaDeDinero << "\n";
	}
	
void Jugador::RebajarDineroPorMulta(int multa){
	this->_CuentaDeDinero=  this->_CuentaDeDinero - multa;;
	cout << this->_CuentaDeDinero << "\n";
	}
	
void Jugador::RebajarDineroPorCompra(int valorpropiedad){
	 this->_CuentaDeDinero= this->_CuentaDeDinero - valorpropiedad;
	 cout << this->_CuentaDeDinero << "\n";
	}
	
void Jugador::SumarDineroCobrado(int ganancia1){
	 this->_CuentaDeDinero= this->_CuentaDeDinero + ganancia1;
	 cout << this->_CuentaDeDinero << "\n";
	}
	
void Jugador::SumarDineroPorPasarPorInicio(){
 	this->_CuentaDeDinero= this->_CuentaDeDinero + 200;
	 cout << this->_CuentaDeDinero << "\n";
	}
	
void Jugador::CambiarPosicion(int dados){
	Jugador::Posicion=0; //borrar,asignar la posicion  0 la  hace la clase tablero (pero estamos empezando con pruebas por eso lo hago aca por ahora)
	Jugador::Posicion= Jugador::Posicion + dados;
	if(Jugador::Posicion>=36){//pasa por el inicio
		Jugador::SumarDineroPorPasarPorInicio();
		Jugador::Posicion= Jugador::Posicion-36;
		}
	cout << Jugador::Posicion << "\n";
	}

//////////////////////////////////////////FIN METODOS JUGADOR///////////////////////////////////////////


///////////////////////                   METODOS PARA CASILLA         ///////////////////////////////////
 void Casilla::DaNombreALaCasillayNumero(string nombre, int numero){
	  Casilla::nombredecasilla = nombre;
	  Casilla::numero= numero;
	  cout << Casilla::nombredecasilla << "\n" << Casilla::numero << "\n";
	 }







//////////////////////////////////////////FIN METODOS CASILLA//////////////////////////////////////////////

///////// INICIO METODOS TIRAR DADOS
int TableroControl::TirarDados(){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(2,12); // distribution in range [1, 6]
    cout << dist6(rng) << endl;
    return 0;
}
   
////////////// FIN METOOS TIRAR DADOS
   ////////////////////////////////////Inicio pruebas tablero control/////////////////////////////////////////
int main(){
///////////////////////////           PRUEBAS PARA LA CLASE JUGADOR          ///////////////////////////
  cout <<"todo bien por aca" <<"\n";
  Jugador jugador1;
  string nombre="rodolfo";
  jugador1.InscribeJugador(nombre);
  cout << jugador1.Nombre << "\n";
  ///
  string ficha="*";
  jugador1.InscribirFicha(ficha);
  cout << jugador1.ficha << "\n";
  ///
  jugador1.DarDineroInicial();
  ///
  int multa= 90;
  jugador1.RebajarDineroPorMulta(multa);
  ///
  int valorpropiedad=500;
  jugador1.RebajarDineroPorCompra(valorpropiedad);
  ///
  int gananciacobrada=80;
  jugador1.SumarDineroCobrado(gananciacobrada);
  ///
  jugador1.SumarDineroPorPasarPorInicio();
  ///
  int dados=36; //ejm porque en este caso la posicion es 0 y quier probar el sobre pase por el inicio
  jugador1.CambiarPosicion(dados);
  ///
  
 /////////////////////////////////////////FIN DE PRUEBAS PARA JUGADOR//////////////////////////////////// 
 
 ///////////////////////////           PRUEBAS PARA LA CLASE CASILLA          ///////////////////////////
 Casilla Casilla1;
 Casilla Casilla2;
 Casilla Casilla3;
 Casilla Casilla4;
 Casilla Casilla5;
 Casilla Casilla6;
 Casilla Casilla7;
 Casilla Casilla8;
 Casilla Casilla9;
 Casilla Casilla10;
 Casilla Casilla11;
 Casilla Casilla12;
 Casilla Casilla13;
 Casilla Casilla14;
 Casilla Casilla15;
 Casilla Casilla16;
 Casilla Casilla17;
 Casilla Casilla18;
 Casilla Casilla19;
 Casilla Casilla20;
 Casilla Casilla21;
 Casilla Casilla22;
 Casilla Casilla23;
 Casilla Casilla24;
 Casilla Casilla25;
 Casilla Casilla26;
 Casilla Casilla27;
 Casilla Casilla28;
 Casilla Casilla29;
 Casilla Casilla30;
 Casilla Casilla31;
 Casilla Casilla32;
 Casilla Casilla33;
 Casilla Casilla34;
 Casilla Casilla35;
 Casilla Casilla36;
 
 Casilla1.DaNombreALaCasillayNumero("San Jose",1);
 Casilla2.DaNombreALaCasillayNumero("Desamparados",2);
 Casilla3.DaNombreALaCasillayNumero("Montes de Oca",3);
 Casilla4.DaNombreALaCasillayNumero("Curriabat",4);
 Casilla5.DaNombreALaCasillayNumero("Hatillos",5);
 Casilla6.DaNombreALaCasillayNumero("ICE",6);
 Casilla7.DaNombreALaCasillayNumero("Cartago",7);
 Casilla8.DaNombreALaCasillayNumero("Tres Rios",8);
 Casilla9.DaNombreALaCasillayNumero("Turrialba",9);
 Casilla10.DaNombreALaCasillayNumero("AyA",10);
 Casilla11.DaNombreALaCasillayNumero("Limon",11);
 Casilla12.DaNombreALaCasillayNumero("Puerto Viejo",12);
 Casilla13.DaNombreALaCasillayNumero("Cahuita",13);
 Casilla14.DaNombreALaCasillayNumero("Autopistas del Sol",14);
 Casilla15.DaNombreALaCasillayNumero("Puntarenas",15);
 Casilla16.DaNombreALaCasillayNumero("Manuel Antonio",16);
 Casilla17.DaNombreALaCasillayNumero("Montezuma",17);
 Casilla18.DaNombreALaCasillayNumero("Jaco",18);
 Casilla19.DaNombreALaCasillayNumero("Alajuela",19);
 Casilla20.DaNombreALaCasillayNumero("San Ramon",20);
 Casilla21.DaNombreALaCasillayNumero("Poas",21);
 Casilla22.DaNombreALaCasillayNumero("Grecia",22);
 Casilla23.DaNombreALaCasillayNumero("Impuestos de la Renta",23);
 Casilla24.DaNombreALaCasillayNumero("Heredia",24);
 Casilla25.DaNombreALaCasillayNumero("San Rafael",25);
 Casilla26.DaNombreALaCasillayNumero("Barva",26);
 Casilla27.DaNombreALaCasillayNumero("San Joaquin",27);
 Casilla28.DaNombreALaCasillayNumero("San Isidro",28);
 Casilla29.DaNombreALaCasillayNumero("Seguro Social",29);
 Casilla30.DaNombreALaCasillayNumero("Guanacaste",30);
 Casilla31.DaNombreALaCasillayNumero("Liberia",31);
 Casilla32.DaNombreALaCasillayNumero("Golfito",32);
 Casilla33.DaNombreALaCasillayNumero("Nicoya",33);
 Casilla34.DaNombreALaCasillayNumero("Playa Tamarindo",34);
 Casilla35.DaNombreALaCasillayNumero("Playa Conchal",35);
 Casilla36.DaNombreALaCasillayNumero("IVA",36);

//////////INICIO PRUEBAS DADOS

TableroControl Tablero;
Tablero.TirarDados();

  return 0;
}



