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
	this->Nombre=nombre;
	}

void Jugador::InscribirFicha(string ficha){
	this->ficha=ficha;
	}
	
void Jugador::DarDineroInicial(){
	this->_CuentaDeDinero=1000;

	}
	
void Jugador::RebajarDineroPorMulta(int multa){
	this->_CuentaDeDinero=  this->_CuentaDeDinero - multa;;

	}
	
void Jugador::RebajarDineroPorCompra(int valorpropiedad){
	 this->_CuentaDeDinero= this->_CuentaDeDinero - valorpropiedad;
	}
	
void Jugador::SumarDineroCobrado(int ganancia1){
	 this->_CuentaDeDinero= this->_CuentaDeDinero + ganancia1;

	}
	
void Jugador::SumarDineroPorPasarPorInicio(){
 	this->_CuentaDeDinero= this->_CuentaDeDinero + 200;
	
	}
	
void Jugador::CambiarPosicion(int dados){
	this->Posicion=0; //borrar,asignar la posicion  0 la  hace la clase tablero (pero estamos empezando con pruebas por eso lo hago aca por ahora)
	this->Posicion= Jugador::Posicion + dados;
	if(this->Posicion>=36){//pasa por el inicio
		this->SumarDineroPorPasarPorInicio();
		this->Posicion= this->Posicion-36;
		}

	}

  string Jugador::DaNombre(){
	string nom = this->Nombre;
	return nom;
	}

//////////////////////////////////////////FIN METODOS JUGADOR///////////////////////////////////////////


///////////////////////                   METODOS PARA CASILLA         ///////////////////////////////////
 void Casilla::DaNombreALaCasillayNumero(string nombre, int numero){
	  this->nombredecasilla = nombre;
	  this->numero= numero;
	  
	 }

void Casilla::InicializarPropietario(){
	this->propietario= false;
	}
	
void Casilla::InicializarCosto(int costo){
	this->valordepropiedad =costo;
	}

void Casilla::InicializarMulta(int multa){
	this->multa =multa;
	}
	
void Casilla::AgregarPropietario(string nombre){
	this->propietario= true;
	this->nombredelpropietario= nombre;
	}







//////////////////////////////////////////FIN METODOS CASILLA//////////////////////////////////////////////

///////// INICIO METODOS TableroControl
int TableroControl::IniciarPosiciones(){
	  int posicioncero=0;
      return posicioncero;
	 }
int TableroControl::TirarDados(){
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(2,12); // distribution in range [1, 6]
    this->dados= dist6(rng);
   
    
    return this->dados;
}
   
////////////// FIN METOOS TableroControl
  
int main(){
 TableroControl Tablero;
 Jugador jugador1;
 Jugador jugador2;
 Jugador jugador3;
 Jugador jugador4;
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
 ///
 Casilla1.InicializarPropietario();
 Casilla2.InicializarPropietario();
 Casilla3.InicializarPropietario();
 Casilla4.InicializarPropietario();
 Casilla5.InicializarPropietario();
 Casilla6.InicializarPropietario();
 Casilla7.InicializarPropietario();
 Casilla8.InicializarPropietario();
 Casilla9.InicializarPropietario();
 Casilla10.InicializarPropietario();
 Casilla11.InicializarPropietario();
 Casilla12.InicializarPropietario();
 Casilla13.InicializarPropietario();
 Casilla14.InicializarPropietario();
 Casilla5.InicializarPropietario();
 Casilla16.InicializarPropietario(); 
 Casilla17.InicializarPropietario();
 Casilla18.InicializarPropietario();
 Casilla19.InicializarPropietario();
 Casilla20.InicializarPropietario();
 Casilla21.InicializarPropietario();
 Casilla22.InicializarPropietario();
 Casilla23.InicializarPropietario();
 Casilla24.InicializarPropietario();
 Casilla25.InicializarPropietario();
 Casilla26.InicializarPropietario();
 Casilla27.InicializarPropietario();
 Casilla28.InicializarPropietario();
 Casilla29.InicializarPropietario();
 Casilla30.InicializarPropietario();
 Casilla31.InicializarPropietario();
 Casilla32.InicializarPropietario();
 Casilla33.InicializarPropietario();
 Casilla34.InicializarPropietario();
 Casilla35.InicializarPropietario();
 Casilla36.InicializarPropietario();
   Casilla1.InicializarCosto(700);
 Casilla2.InicializarCosto(450);
 Casilla3.InicializarCosto(650);
 Casilla4.InicializarCosto(500);
 Casilla5.InicializarCosto(450);
 Casilla6.InicializarCosto(700);
 Casilla7.InicializarCosto(550);
 Casilla8.InicializarCosto(500);
 Casilla9.InicializarCosto(400);
 Casilla10.InicializarCosto(550);
 Casilla11.InicializarCosto(600);
 Casilla12.InicializarCosto(550);
 Casilla13.InicializarCosto(325);
 // caislla 14 es de impuestos, no se compra
 Casilla15.InicializarCosto(600);
 Casilla16.InicializarCosto(425); 
 Casilla17.InicializarCosto(415);
 Casilla18.InicializarCosto(400);
 Casilla19.InicializarCosto(650);
 Casilla20.InicializarCosto(400);
 Casilla21.InicializarCosto(450);
 Casilla22.InicializarCosto(375);
 // caislla 23 es de impuestos, no se compra
 Casilla24.InicializarCosto(625);
 Casilla25.InicializarCosto(420);
 Casilla26.InicializarCosto(415);
 Casilla27.InicializarCosto(400);
 Casilla28.InicializarCosto(420);
 // caislla 29 es de impuestos, no se compra
 Casilla30.InicializarCosto(600);
 Casilla31.InicializarCosto(500);
 Casilla32.InicializarCosto(500);
 Casilla33.InicializarCosto(450);
 Casilla34.InicializarCosto(400);
 Casilla35.InicializarCosto(475);
 // caislla 36 es de impuestos, no se compra
 Casilla1.InicializarMulta(150);
 Casilla2.InicializarMulta(90);
 Casilla3.InicializarMulta(90);
 Casilla4.InicializarMulta(90);
 Casilla5.InicializarMulta(90);
 Casilla6.InicializarMulta(30);
 Casilla7.InicializarMulta(130);
 Casilla8.InicializarMulta(60);
 Casilla9.InicializarMulta(40);
 Casilla10.InicializarMulta(30);
 Casilla11.InicializarMulta(100);
 Casilla12.InicializarMulta(80);
 Casilla13.InicializarMulta(75);
 Casilla13.InicializarMulta(200);
 Casilla15.InicializarMulta(100);
 Casilla16.InicializarMulta(80); 
 Casilla17.InicializarMulta(80);
 Casilla18.InicializarMulta(70);
 Casilla19.InicializarMulta(130);
 Casilla20.InicializarMulta(60);
 Casilla21.InicializarMulta(75);
 Casilla22.InicializarMulta(60);
 Casilla23.InicializarMulta(300);
 Casilla24.InicializarMulta(100);
 Casilla25.InicializarMulta(70);
 Casilla26.InicializarMulta(70);
 Casilla27.InicializarMulta(75);
 Casilla28.InicializarMulta(70);
 Casilla29.InicializarMulta(300);
 Casilla30.InicializarMulta(100);
 Casilla31.InicializarMulta(90);
 Casilla32.InicializarMulta(90);
 Casilla33.InicializarMulta(60);
 Casilla34.InicializarMulta(50);
 Casilla35.InicializarMulta(50);
 Casilla36.InicializarMulta(200);
  cout << "Ingrese el nombre del jugador 1:" << "\n";
 cin >> jugador1.Nombre;
 cout << "Hola " << jugador1.Nombre << " ingrese su caracter de ficha: ""\n";
 cin >> jugador1.ficha;
 cout << "Ingrese el nombre del jugador 2:" << "\n";
 cin >> jugador2.Nombre;
  cout << "Hola " << jugador2.Nombre << " ingrese su caracter de ficha: ""\n";
 cin >> jugador2.ficha;
while(jugador1.ficha==jugador2.ficha){
	  cout << "Ha ingresado un caracter ya utilizado, ingrese uno nuevo ""\n";
	  cin >> jugador2.ficha;
	 }
 cout << "Ingrese el nombre del jugador 3:" << "\n";
 cin >> jugador3.Nombre;
 cout << "Hola " << jugador3.Nombre << " ingrese su caracter de ficha: ""\n";
 cin >> jugador3.ficha;
 while(jugador3.ficha==jugador1.ficha || jugador3.ficha==jugador2.ficha){
	  cout << "Ha ingresado un caracter ya utilizado, ingrese uno nuevo ""\n";
	  cin >> jugador3.ficha;
	 }
cout << "Ingrese el nombre del jugador 4:" << "\n";
cin >> jugador4.Nombre;
cout << "Hola " << jugador4.Nombre << " ingrese su caracter de ficha: ""\n";
cin >> jugador4.ficha;
while(jugador4.ficha==jugador1.ficha || jugador4.ficha==jugador2.ficha || jugador4.ficha==jugador3.ficha){
	  cout << "Ha ingresado un caracter ya utilizado, ingrese uno nuevo ""\n";
	  cin >> jugador4.ficha;
	 }


jugador1.DarDineroInicial();
jugador2.DarDineroInicial();
jugador3.DarDineroInicial();
jugador4.DarDineroInicial();

jugador1.Posicion=Tablero.IniciarPosiciones();
jugador2.Posicion=Tablero.IniciarPosiciones();
jugador3.Posicion=Tablero.IniciarPosiciones();
jugador4.Posicion=Tablero.IniciarPosiciones();

//vector de turno (orden jugado1,jugador2,jugador3,jugador4 por simplicidad
   vector<string> vectorturnos;
   vectorturnos.push_back(jugador1.Nombre);
   vectorturnos.push_back(jugador2.Nombre);
   vectorturnos.push_back(jugador3.Nombre);
   vectorturnos.push_back(jugador4.Nombre);
  
   bool findeljuego=false;//se convierte en true una vez todos los 4 jugadores han sido eliminados
   cout << "El juego ha iniciado" << "\n";
   while(findeljuego==false){
	   //turno de jugador1
	   cout <<"El turno es de " << jugador1.Nombre <<" tire los dados usando <t>" << "\n";
	   string t;
	   cin >> t;
	   while(t!="t"){
		    cout << "Tiene que ingresar t para tirar los dados" << "\n";
		    cin >> t;
		   }
	   int valordadosjug1= Tablero.TirarDados();
	   cout << "El valor obtenido por los dados es: " << valordadosjug1 << "\n";
	   jugador1.CambiarPosicion(valordadosjug1);
	   cout << "Por lo que su posicion ahora es: " << jugador1.Posicion <<"\n";
	   
	  	   if(jugador1.Posicion==Casilla1.numero){
		   if(Casilla1.propietario==0){
			   cout << "Ha caido en: " << Casilla1.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla2.numero){
		    if(Casilla2.propietario==0){
				   cout << "Ha caido en: " << Casilla2.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla3.numero){
		    if(Casilla3.propietario==0){
				   cout << "Ha caido en: " << Casilla3.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla4.numero){
		    if(Casilla4.propietario==0){
				   cout << "Ha caido en: " << Casilla4.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla5.numero){
		    if(Casilla5.propietario==0){
				   cout << "Ha caido en: " << Casilla5.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla6.numero){
		    if(Casilla6.propietario==0){
				   cout << "Ha caido en: " << Casilla6.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla7.numero){
		    if(Casilla7.propietario==0){
				   cout << "Ha caido en: " << Casilla7.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla8.numero){
		    if(Casilla8.propietario==0){
				   cout << "Ha caido en: " << Casilla8.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla9.numero){ 
		   if(Casilla9.propietario==0){
		   	   cout << "Ha caido en: " << Casilla9.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
		   }
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla10.numero){
		    if(Casilla10.propietario==0){
				   cout << "Ha caido en: " << Casilla10.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla11.numero){
		    if(Casilla11.propietario==0){
				   cout << "Ha caido en: " << Casilla11.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla12.numero){
		    if(Casilla12.propietario==0){
				   cout << "Ha caido en: " << Casilla12.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla13.numero){
		    if(Casilla13.propietario==0){
				   cout << "Ha caido en: " << Casilla13.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla14.numero){
		    if(Casilla14.propietario==0){
		       cout << "Ha caido en: " << Casilla14.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
				
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla15.numero){
		    if(Casilla15.propietario==0){
				   cout << "Ha caido en: " << Casilla15.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla16.numero){
		    if(Casilla16.propietario==0){
				   cout << "Ha caido en: " << Casilla16.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla17.numero){
		    if(Casilla17.propietario==0){
				   cout << "Ha caido en: " << Casilla17.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla18.numero){
		    if(Casilla18.propietario==0){
				   cout << "Ha caido en: " << Casilla18.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla19.numero){
		    if(Casilla19.propietario==0){
				   cout << "Ha caido en: " << Casilla19.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla20.numero){
		    if(Casilla20.propietario==0){
				   cout << "Ha caido en: " << Casilla20.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla21.numero){
		    if(Casilla21.propietario==0){
				   cout << "Ha caido en: " << Casilla21.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla22.numero){
		    if(Casilla22.propietario==0){
				   cout << "Ha caido en: " << Casilla22.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla23.numero){
		    if(Casilla23.propietario==0){
				   cout << "Ha caido en: " << Casilla23.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla24.numero){
		    if(Casilla24.propietario==0){
				   cout << "Ha caido en: " << Casilla24.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla25.numero){
		    if(Casilla25.propietario==0){
				   cout << "Ha caido en: " << Casilla25.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla26.numero){
		    if(Casilla26.propietario==0){
				   cout << "Ha caido en: " << Casilla26.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla27.numero){
		    if(Casilla27.propietario==0){
				   cout << "Ha caido en: " << Casilla27.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla28.numero){
		    if(Casilla28.propietario==0){
				   cout << "Ha caido en: " << Casilla28.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla29.numero){
		    if(Casilla29.propietario==0){
				   cout << "Ha caido en: " << Casilla29.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla30.numero){
		    if(Casilla30.propietario==0){
				   cout << "Ha caido en: " << Casilla30.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla31.numero){
		    if(Casilla31.propietario==0){
				   cout << "Ha caido en: " << Casilla31.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }	
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla32.numero){
		    if(Casilla32.propietario==0){
				   cout << "Ha caido en: " << Casilla32.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }   
		   
	   if(jugador1.Posicion==Casilla33.numero){
		    if(Casilla33.propietario==0){
				   cout << "Ha caido en: " << Casilla33.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla34.numero){
		    if(Casilla34.propietario==0){
				   cout << "Ha caido en: " << Casilla34.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
	   if(jugador1.Posicion==Casilla35.numero){
		    if(Casilla35.propietario==0){
				   cout << "Ha caido en: " << Casilla35.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
		   else{}
		   }
		   
       if(jugador1.Posicion==Casilla36.numero){
		    if(Casilla36.propietario==0){
				   cout << "Ha caido en: " << Casilla36.nombredecasilla << " quiere comprarla? Digite S si quiere o N si no quiere comprarla:" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N:" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){
					   cout<<"compra"<<"\n";
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra" <<"\n";
					   }
			}
		   else{}
		   }	   
	   
	   }
  return 0;
}



